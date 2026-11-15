	THUMB_FUNC_START sub_0802D514
sub_0802D514: @ 0x0802D514
	push {r4,lr}
	ldr r1, _0802D564  @ =gUnknown_03000420
	ldrb r0, [r1, #3]
	lsl r0, r0, #11
	ldr r2, _0802D568  @ =gUnknown_0202D112
	add r0, r0, r2
	add r3, r0, #0
	add r3, r3, #64
	ldr r0, _0802D56C  @ =gUnknown_03006C80
	ldrb r0, [r0, #4]
	add r4, r1, #0
	cmp r0, #8
	bhi _0802D574
	ldr r1, _0802D570  @ =0x00001058
	add r0, r1, #0
	strh r0, [r3]
	add r1, r1, #1
	add r0, r1, #0
	strh r0, [r3, #2]
	add r1, r1, #5
	add r0, r1, #0
	strh r0, [r3, #4]
	ldrb r0, [r4, #3]
	lsl r0, r0, #11
	add r0, r0, r2
	add r3, r0, #0
	add r3, r3, #128
	sub r1, r1, #4
	add r0, r1, #0
	strh r0, [r3]
	add r1, r1, #1
	add r0, r1, #0
	strh r0, [r3, #2]
	add r1, r1, #4
	add r0, r1, #0
	strh r0, [r3, #4]
	sub r1, r1, #8
	add r0, r1, #0
	strh r0, [r3, #6]
	b _0802D5B4
_0802D564:
	.4byte gUnknown_03000420
_0802D568:
	.4byte gUnknown_0202D112
_0802D56C:
	.4byte gUnknown_03006C80
_0802D570:
	.4byte 0x00001058
_0802D574:
	ldr r1, _0802D614  @ =0x00001058
	add r0, r1, #0
	strh r0, [r3]
	add r1, r1, #1
	add r0, r1, #0
	strh r0, [r3, #2]
	add r1, r1, #3
	add r0, r1, #0
	strh r0, [r3, #4]
	add r1, r1, #2
	add r0, r1, #0
	strh r0, [r3, #6]
	ldrb r0, [r4, #3]
	lsl r0, r0, #11
	add r0, r0, r2
	add r3, r0, #0
	add r3, r3, #128
	sub r1, r1, #4
	add r0, r1, #0
	strh r0, [r3]
	add r1, r1, #1
	add r0, r1, #0
	strh r0, [r3, #2]
	add r1, r1, #2
	add r0, r1, #0
	strh r0, [r3, #4]
	add r1, r1, #2
	add r0, r1, #0
	strh r0, [r3, #6]
	sub r1, r1, #8
	add r0, r1, #0
	strh r0, [r3, #8]
_0802D5B4:
	ldr r1, _0802D618  @ =gUnknown_084277BC
	ldrb r0, [r4, #3]
	lsl r0, r0, #11
	ldr r2, _0802D61C  @ =gUnknown_0202D144
	add r3, r0, r2
	ldrh r0, [r1]
	strh r0, [r3]
	ldrh r0, [r1, #2]
	strh r0, [r3, #2]
	ldrh r0, [r1, #4]
	strh r0, [r3, #4]
	ldrb r0, [r4, #3]
	lsl r0, r0, #11
	add r0, r0, r2
	add r3, r0, #0
	add r3, r3, #64
	ldrh r0, [r1, #6]
	strh r0, [r3]
	ldrh r0, [r1, #8]
	strh r0, [r3, #2]
	ldrh r0, [r1, #10]
	strh r0, [r3, #4]
	ldrb r0, [r4, #3]
	lsl r0, r0, #11
	add r0, r0, r2
	add r3, r0, #0
	add r3, r3, #128
	ldrh r0, [r1, #12]
	strh r0, [r3]
	ldrh r0, [r1, #14]
	strh r0, [r3, #2]
	ldrh r0, [r1, #16]
	strh r0, [r3, #4]
	ldrb r0, [r4, #3]
	lsl r0, r0, #11
	add r0, r0, r2
	add r3, r0, #0
	add r3, r3, #192
	ldrh r0, [r1, #18]
	strh r0, [r3]
	ldrh r0, [r1, #20]
	strh r0, [r3, #2]
	ldrh r0, [r1, #22]
	strh r0, [r3, #4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802D614:
	.4byte 0x00001058
_0802D618:
	.4byte gUnknown_084277BC
_0802D61C:
	.4byte gUnknown_0202D144
	THUMB_FUNC_END sub_0802D514

