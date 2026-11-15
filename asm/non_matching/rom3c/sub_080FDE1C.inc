	THUMB_FUNC_START sub_080FDE1C
sub_080FDE1C: @ 0x080FDE1C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080FDE54  @ =gRam
	ldr r1, _080FDE58  @ =0x00000F92
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080FDE5C  @ =gUnknown_0817AA2C
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #2
	bl sub_080C9480
	ldr r0, _080FDE60  @ =0x000010D2
	add r4, r4, r0
	add r4, r5, r4
	ldrb r0, [r4]
	cmp r0, #0
	bne _080FDE4C
	add r0, r5, #0
	bl sub_080C6230
_080FDE4C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FDE54:
	.4byte gRam
_080FDE58:
	.4byte 0x00000F92
_080FDE5C:
	.4byte gUnknown_0817AA2C
_080FDE60:
	.4byte 0x000010D2
	THUMB_FUNC_END sub_080FDE1C

