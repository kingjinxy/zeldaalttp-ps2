	THUMB_FUNC_START sub_080F053C
sub_080F053C: @ 0x080F053C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #8
	bl sub_080CF388
	ldr r0, _080F0564  @ =gRam
	ldr r1, _080F0568  @ =0x00001610
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080F055E
	ldr r1, _080F056C  @ =gUnknown_08178CD0
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
_080F055E:
	pop {r4}
	pop {r0}
	bx r0
_080F0564:
	.4byte gRam
_080F0568:
	.4byte 0x00001610
_080F056C:
	.4byte gUnknown_08178CD0
	THUMB_FUNC_END sub_080F053C

