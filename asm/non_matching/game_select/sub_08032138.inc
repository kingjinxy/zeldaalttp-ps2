	THUMB_FUNC_START sub_08032138
sub_08032138: @ 0x08032138
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r4, #0
	ldr r0, _080321CC  @ =gUnknown_03006C80
	ldrb r1, [r0]
	cmp r4, r1
	bcs _080321C2
	mov r7, #4
	neg r7, r7
	add r6, r0, #0
	mov r3, #0
	mov r8, r3
	mov r5, #3
_08032154:
	add r0, r4, #0
	bl sub_08063C5C
	add r2, r0, #0
	ldrb r1, [r2, #28]
	add r0, r7, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	lsl r1, r4, #4
	mov r0, #252
	lsl r0, r0, #1
	add r1, r1, r0
	ldrb r0, [r6]
	sub r0, r0, #1
	lsl r0, r0, #3
	sub r1, r1, r0
	strh r1, [r2, #50]
	mov r0, #236
	lsl r0, r0, #1
	strh r0, [r2, #54]
	add r0, r2, #0
	add r0, r0, #42
	mov r1, r8
	strb r1, [r0]
	ldrb r1, [r2, #31]
	mov r0, #63
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2, #31]
	add r1, r2, #0
	add r1, r1, #46
	mov r0, #3
	strb r0, [r1]
	add r2, r2, #94
	ldrb r0, [r2]
	mov r3, #13
	neg r3, r3
	add r1, r3, #0
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	sub r1, r5, r4
	and r1, r1, r5
	and r0, r0, r7
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldrb r0, [r6]
	cmp r4, r0
	bcc _08032154
_080321C2:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080321CC:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08032138

