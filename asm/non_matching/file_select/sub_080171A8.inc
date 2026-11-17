	THUMB_FUNC_START sub_080171A8
sub_080171A8: @ 0x080171A8
	push {r4,lr}
	add r4, r0, #0
	mov r1, #0
	ldrb r0, [r4, #24]
	cmp r0, #0
	bne _080171C2
	add r0, r4, #0
	mov r1, #64
	mov r2, #48
	bl sub_08009E6C
	add r1, r0, #0
	b _080171C6
_080171C2:
	sub r0, r0, #1
	strb r0, [r4, #24]
_080171C6:
	cmp r1, #0
	beq _08017224
	mov r0, #4
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_0803CECC
	add r3, r4, #0
	add r3, r3, #43
	strb r0, [r3]
	mov r0, #224
	lsl r0, r0, #9
	str r0, [r4, #16]
	mov r0, #192
	lsl r0, r0, #1
	str r0, [r4, #12]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #16
	orr r0, r0, r1
	strb r0, [r2]
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #6
	strb r0, [r1]
	ldrb r0, [r3]
	bl sub_08043EA4
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r4, #0
	add r1, r1, #42
	cmp r0, #255
	beq _0801720E
	strb r0, [r1]
_0801720E:
	ldrb r1, [r1]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
	mov r0, #49
	bl sub_08003DFC
	b _0801724E
_08017224:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08017242
	bl sub_0800099C
	mov r1, #28
	and r0, r0, r1
	add r0, r0, #30
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_0801740C
_08017242:
	add r0, r4, #0
	bl sub_0800963C
	add r0, r4, #0
	bl GetNextFrame
_0801724E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080171A8

