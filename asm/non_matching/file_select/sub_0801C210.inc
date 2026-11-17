	THUMB_FUNC_START sub_0801C210
sub_0801C210: @ 0x0801C210
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	bl sub_0801C4E8
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801C2A8
	add r0, r4, #0
	mov r1, #64
	mov r2, #64
	bl sub_08009E6C
	add r2, r0, #0
	cmp r2, #0
	beq _0801C286
	add r0, r4, #0
	add r0, r0, #42
	ldrb r0, [r0]
	cmp r0, #1
	beq _0801C25C
	cmp r0, #1
	bgt _0801C248
	cmp r0, #0
	beq _0801C252
	b _0801C286
_0801C248:
	cmp r0, #2
	beq _0801C26A
	cmp r0, #3
	beq _0801C278
	b _0801C286
_0801C252:
	mov r0, #54
	ldrsh r1, [r2, r0]
	mov r3, #54
	ldrsh r0, [r4, r3]
	b _0801C280
_0801C25C:
	mov r0, #50
	ldrsh r1, [r2, r0]
	mov r3, #50
	ldrsh r0, [r4, r3]
	cmp r1, r0
	ble _0801C286
	b _0801C284
_0801C26A:
	mov r0, #54
	ldrsh r1, [r2, r0]
	mov r3, #54
	ldrsh r0, [r4, r3]
	cmp r1, r0
	ble _0801C286
	b _0801C284
_0801C278:
	mov r0, #50
	ldrsh r1, [r2, r0]
	mov r3, #50
	ldrsh r0, [r4, r3]
_0801C280:
	cmp r1, r0
	bge _0801C286
_0801C284:
	str r2, [r4, #100]
_0801C286:
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801C2A8
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_08003870
_0801C2A8:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C210

	.byte 0x00
	.byte 0x00
