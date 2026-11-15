	THUMB_FUNC_START sub_080F9928
sub_080F9928: @ 0x080F9928
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080F99E8  @ =gRam
	ldr r1, _080F99EC  @ =0x000010A2
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	mov r2, #1
	and r2, r2, r0
	ldr r6, _080F99F0  @ =0x00001152
	add r1, r5, r6
	add r1, r4, r1
	ldr r0, _080F99F4  @ =gUnknown_0817A340
	add r0, r2, r0
	ldrb r0, [r0]
	ldrb r6, [r1]
	add r0, r0, r6
	strb r0, [r1]
	ldr r1, _080F99F8  @ =gUnknown_0817A342
	add r2, r2, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r2, [r2]
	cmp r0, r2
	bne _080F9962
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_080F9962:
	ldr r1, _080F99FC  @ =gUnknown_0200F318
	add r0, r4, r1
	ldrb r0, [r0]
	ldr r3, _080F9A00  @ =0x00000968
	add r2, r5, r3
	strb r0, [r2]
	ldr r6, _080F9A04  @ =gUnknown_0200F31E
	add r0, r4, r6
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r5, r3
	strb r1, [r0]
	add r6, r6, #6
	add r0, r4, r6
	ldrb r0, [r0]
	ldr r1, _080F9A08  @ =0x0000096C
	add r3, r5, r1
	strb r0, [r3]
	add r6, r6, #6
	add r0, r4, r6
	ldrb r1, [r0]
	ldr r6, _080F9A0C  @ =0x0000096D
	add r0, r5, r6
	strb r1, [r0]
	ldr r1, _080F9A10  @ =0x00001622
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r6, _080F9A14  @ =0x00001623
	add r0, r5, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r1, r1, r0
	add r1, r1, #8
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #15
	bhi _080F99DA
	ldr r1, _080F9A18  @ =0x00001624
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080F9A1C  @ =0x00001625
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r3]
	sub r1, r1, r0
	add r1, r1, #8
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #15
	bhi _080F99DA
	ldr r3, _080F9A20  @ =0x00000F52
	add r1, r5, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F99DA:
	add r0, r4, #0
	bl sub_080F9E38
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F99E8:
	.4byte gRam
_080F99EC:
	.4byte 0x000010A2
_080F99F0:
	.4byte 0x00001152
_080F99F4:
	.4byte gUnknown_0817A340
_080F99F8:
	.4byte gUnknown_0817A342
_080F99FC:
	.4byte gUnknown_0200F318
_080F9A00:
	.4byte 0x00000968
_080F9A04:
	.4byte gUnknown_0200F31E
_080F9A08:
	.4byte 0x0000096C
_080F9A0C:
	.4byte 0x0000096D
_080F9A10:
	.4byte 0x00001622
_080F9A14:
	.4byte 0x00001623
_080F9A18:
	.4byte 0x00001624
_080F9A1C:
	.4byte 0x00001625
_080F9A20:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F9928

