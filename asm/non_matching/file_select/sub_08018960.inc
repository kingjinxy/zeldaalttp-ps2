	THUMB_FUNC_START sub_08018960
sub_08018960: @ 0x08018960
	push {r4,r5,lr}
	add r4, r0, #0
	mov r5, #0
	bl 0x0800963C
	lsl r0, r0, #16
	cmp r0, #0
	beq _080189D0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _080189CC
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	lsr r0, r0, #3
	cmp r0, #1
	beq _080189A6
	cmp r0, #1
	bgt _0801898C
	cmp r0, #0
	beq _08018996
	b _080189CC
_0801898C:
	cmp r0, #2
	beq _080189AC
	cmp r0, #3
	beq _080189BC
	b _080189CC
_08018996:
	mov r0, #54
	ldrsh r1, [r4, r0]
	add r0, r4, #0
	add r0, r0, #124
	ldrh r0, [r0]
	cmp r1, r0
	bge _080189CC
	b _080189D0
_080189A6:
	mov r0, #50
	ldrsh r1, [r4, r0]
	b _080189B0
_080189AC:
	mov r0, #54
	ldrsh r1, [r4, r0]
_080189B0:
	add r0, r4, #0
	add r0, r0, #124
	ldrh r0, [r0]
	cmp r1, r0
	ble _080189CC
	b _080189D0
_080189BC:
	mov r0, #50
	ldrsh r1, [r4, r0]
	add r0, r4, #0
	add r0, r0, #124
	ldrh r0, [r0]
	cmp r1, r0
	bge _080189CC
	mov r5, #1
_080189CC:
	cmp r5, #0
	beq _080189EE
_080189D0:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldr r0, [r4, #12]
	asr r0, r0, #1
	str r0, [r4, #12]
	add r2, r4, #0
	add r2, r2, #43
	ldrb r0, [r2]
	mov r1, #16
	eor r0, r0, r1
	strb r0, [r2]
	mov r0, #29
	bl play_sound
_080189EE:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08018960

