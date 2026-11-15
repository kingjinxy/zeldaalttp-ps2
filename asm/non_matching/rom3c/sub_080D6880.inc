	THUMB_FUNC_START sub_080D6880
sub_080D6880: @ 0x080D6880
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D68B4  @ =gRam
	ldr r1, _080D68B8  @ =0x00000F62
	add r4, r3, r1
	add r4, r0, r4
	ldr r2, _080D68BC  @ =0x00000EE2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #4
	mov r2, #1
	and r1, r1, r2
	strb r1, [r4]
	ldr r1, _080D68C0  @ =0x00001122
	add r3, r3, r1
	add r0, r0, r3
	ldr r2, _080D68C4  @ =gUnknown_0817532C
	ldrb r1, [r4]
	add r1, r1, r2
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080D68B4:
	.4byte gRam
_080D68B8:
	.4byte 0x00000F62
_080D68BC:
	.4byte 0x00000EE2
_080D68C0:
	.4byte 0x00001122
_080D68C4:
	.4byte gUnknown_0817532C
	THUMB_FUNC_END sub_080D6880

