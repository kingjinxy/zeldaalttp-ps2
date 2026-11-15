	THUMB_FUNC_START sub_080DA750
sub_080DA750: @ 0x080DA750
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #8
	bl sub_080CF370
	ldr r0, _080DA780  @ =gRam
	ldr r1, _080DA784  @ =0x00000FC2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsr r1, r1, #2
	lsl r1, r1, #4
	ldr r0, _080DA788  @ =gUnknown_08175B58
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DA780:
	.4byte gRam
_080DA784:
	.4byte 0x00000FC2
_080DA788:
	.4byte gUnknown_08175B58
	THUMB_FUNC_END sub_080DA750

