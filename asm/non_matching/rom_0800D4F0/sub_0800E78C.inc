	THUMB_FUNC_START sub_0800E78C
sub_0800E78C: @ 0x0800E78C
	push {r4-r6,lr}
	ldr r3, _0800E7F4  @ =gTextbox
	ldr r1, _0800E7F8  @ =0x0000010D
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	ble _0800E7EE
	ldr r5, _0800E7FC  @ =gUnknown_03000420
	ldrb r0, [r5, #3]
	lsl r4, r0, #3
	ldr r6, _0800E800  @ =gUnknown_020309C0
	add r4, r4, r6
	lsl r0, r0, #11
	ldrb r1, [r4, #5]
	lsl r1, r1, #5
	ldrb r2, [r4, #4]
	add r1, r1, r2
	lsl r1, r1, #1
	ldr r2, _0800E804  @ =gBG0Buffer
	add r1, r1, r2
	add r0, r0, r1
	ldrb r3, [r3, #2]
	lsr r3, r3, #6
	lsl r3, r3, #12
	mov r1, #144
	orr r3, r3, r1
	ldrb r1, [r4, #6]
	ldrb r2, [r4, #7]
	bl sub_0800E80C
	bl sub_0800E950
	bl sub_0800EA38
	bl sub_0800EAA4
	ldr r2, _0800E808  @ =gUnknown_02030990
	ldrb r0, [r5, #3]
	lsl r0, r0, #3
	add r2, r0, r2
	add r0, r0, r6
	ldr r1, [r0, #4]
	ldr r0, [r0]
	str r0, [r2]
	str r1, [r2, #4]
	bl sub_0802C934
_0800E7EE:
	pop {r4-r6}
	pop {r0}
	bx r0
_0800E7F4:
	.4byte gTextbox
_0800E7F8:
	.4byte 0x0000010D
_0800E7FC:
	.4byte gUnknown_03000420
_0800E800:
	.4byte gUnknown_020309C0
_0800E804:
	.4byte gBG0Buffer
_0800E808:
	.4byte gUnknown_02030990
	THUMB_FUNC_END sub_0800E78C

