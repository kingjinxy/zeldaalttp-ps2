	THUMB_FUNC_START sub_0802086C
sub_0802086C: @ 0x0802086C
	push {r4,r5,lr}
	add r5, r0, #0
	bl sub_08020AE8
	lsl r0, r0, #24
	cmp r0, #0
	beq _08020896
	mov r0, #6
	strb r0, [r5, #20]
	mov r0, #60
	strb r0, [r5, #23]
	add r0, r5, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r5, #0
	bl sub_08003870
	b _08020936
_08020896:
	add r0, r5, #0
	bl sub_0800963C
	lsl r0, r0, #16
	cmp r0, #0
	bne _08020930
	add r1, r5, #0
	add r1, r1, #117
	ldrb r0, [r1]
	cmp r0, #0
	beq _080208CA
	add r2, r5, #0
	add r2, r2, #43
	ldrb r0, [r2]
	mov r1, #16
	eor r0, r0, r1
	strb r0, [r2]
	lsr r0, r0, #3
	add r1, r5, #0
	add r1, r1, #42
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r5, #0
	bl sub_08003870
	b _08020930
_080208CA:
	mov r0, #1
	strb r0, [r1]
	add r1, r5, #0
	add r1, r1, #120
	mov r0, #150
	lsl r0, r0, #1
	strh r0, [r1]
	add r4, r5, #0
	add r4, r4, #43
	ldrb r0, [r4]
	sub r1, r1, #2
	strb r0, [r1]
	ldr r2, [r5, #100]
	ldrh r0, [r2, #50]
	ldrh r1, [r5, #50]
	sub r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r1, [r2, #54]
	ldrh r2, [r5, #54]
	sub r1, r1, r2
	lsl r1, r1, #16
	asr r1, r1, #16
	bl sub_080040E0
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r2, [r4]
	lsl r1, r2, #3
	sub r0, r0, r1
	mov r1, #255
	and r0, r0, r1
	cmp r0, #127
	bgt _08020914
	add r0, r2, #0
	add r0, r0, #8
	b _08020918
_08020914:
	add r0, r2, #0
	sub r0, r0, #8
_08020918:
	mov r1, #24
	and r0, r0, r1
	strb r0, [r4]
	ldrb r0, [r4]
	lsr r0, r0, #3
	add r1, r5, #0
	add r1, r1, #42
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r5, #0
	bl sub_08003870
_08020930:
	add r0, r5, #0
	bl GetNextFrame
_08020936:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802086C

