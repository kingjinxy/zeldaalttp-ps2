	THUMB_FUNC_START sub_080188E0
sub_080188E0: @ 0x080188E0
	push {r4,r5,lr}
	add r4, r0, #0
	mov r1, #14
	bl sub_0800997C
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801895A
	mov r0, #24
	and r0, r0, r1
	add r5, r4, #0
	add r5, r5, #43
	strb r0, [r5]
	add r0, r4, #0
	bl sub_08018A14
	cmp r0, #0
	bne _0801895A
	ldrb r0, [r5]
	lsr r0, r0, #3
	cmp r0, #1
	beq _0801892E
	cmp r0, #1
	bgt _0801891C
	cmp r0, #0
	beq _08018926
	b _08018954
_0801891C:
	cmp r0, #2
	beq _08018936
	cmp r0, #3
	beq _08018946
	b _08018954
_08018926:
	ldrb r0, [r4, #23]
	lsl r0, r0, #3
	ldrh r1, [r4, #54]
	b _0801894C
_0801892E:
	ldrb r0, [r4, #23]
	lsl r0, r0, #3
	ldrh r1, [r4, #50]
	b _0801893C
_08018936:
	ldrb r0, [r4, #23]
	lsl r0, r0, #3
	ldrh r1, [r4, #54]
_0801893C:
	add r0, r0, r1
	add r1, r4, #0
	add r1, r1, #124
	strh r0, [r1]
	b _08018954
_08018946:
	ldrb r0, [r4, #23]
	lsl r0, r0, #3
	ldrh r1, [r4, #50]
_0801894C:
	sub r1, r1, r0
	add r0, r4, #0
	add r0, r0, #124
	strh r1, [r0]
_08018954:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
_0801895A:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080188E0

