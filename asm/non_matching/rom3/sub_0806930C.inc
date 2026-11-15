	THUMB_FUNC_START sub_0806930C
sub_0806930C: @ 0x0806930C
	push {r4,lr}
	ldr r1, _08069340  @ =gUnknown_0814C820
	ldr r0, _08069344  @ =gRam
	ldr r2, _08069348  @ =0x0000099C
	add r4, r0, r2
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl sub_08068E7C
	ldrb r1, [r4]
	cmp r1, #0
	bne _08069334
	ldr r0, _0806934C  @ =gUnknown_02000400
	strh r1, [r0]
	ldr r1, _08069350  @ =gUnknown_02000402
	ldr r2, _08069354  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
_08069334:
	mov r0, #0
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08069340:
	.4byte gUnknown_0814C820
_08069344:
	.4byte gRam
_08069348:
	.4byte 0x0000099C
_0806934C:
	.4byte gUnknown_02000400
_08069350:
	.4byte gUnknown_02000402
_08069354:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_0806930C

