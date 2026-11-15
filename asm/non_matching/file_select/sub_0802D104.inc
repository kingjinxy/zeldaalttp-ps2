	THUMB_FUNC_START sub_0802D104
sub_0802D104: @ 0x0802D104
	push {r4,r5,lr}
	ldr r5, _0802D144  @ =gUnknown_03000420
	ldr r2, _0802D148  @ =gUnknown_03006C80
	add r0, r2, #0
	add r0, r0, #36
	ldrb r0, [r0]
	mov r1, #127
	and r1, r1, r0
	ldrb r0, [r5, #13]
	cmp r0, r1
	beq _0802D120
	strb r1, [r5, #13]
	mov r0, #1
	strb r0, [r5, #2]
_0802D120:
	ldr r4, [r2, #8]
	ldr r0, [r5, #16]
	sub r0, r4, r0
	bl sub_0800B830
	cmp r0, #0
	beq _0802D184
	mov r1, #250
	lsl r1, r1, #2
	cmp r0, r1
	ble _0802D150
	ldr r0, [r5, #16]
	cmp r0, r4
	bcc _0802D13E
	ldr r1, _0802D14C  @ =0xFFFFFC18
_0802D13E:
	add r0, r0, r1
	str r0, [r5, #16]
	b _0802D17E
_0802D144:
	.4byte gUnknown_03000420
_0802D148:
	.4byte gUnknown_03006C80
_0802D14C:
	.4byte 0xFFFFFC18
_0802D150:
	cmp r0, #100
	ble _0802D166
	ldr r0, [r5, #16]
	cmp r0, r4
	bcs _0802D160
	add r0, r0, #100
	str r0, [r5, #16]
	b _0802D17E
_0802D160:
	sub r0, r0, #100
	str r0, [r5, #16]
	b _0802D17E
_0802D166:
	cmp r0, #10
	ble _0802D17C
	ldr r0, [r5, #16]
	cmp r0, r4
	bcs _0802D176
	add r0, r0, #10
	str r0, [r5, #16]
	b _0802D17E
_0802D176:
	sub r0, r0, #10
	str r0, [r5, #16]
	b _0802D17E
_0802D17C:
	str r4, [r5, #16]
_0802D17E:
	ldr r1, _0802D18C  @ =gUnknown_03000420
	mov r0, #1
	strb r0, [r1, #2]
_0802D184:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802D18C:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_0802D104

