	THUMB_FUNC_START sub_08135DC4
sub_08135DC4: @ 0x08135DC4
	push {r4-r6,lr}
	sub sp, sp, #136
	add r5, r1, #0
	lsl r0, r0, #16
	lsr r3, r0, #16
	ldr r0, _08135DDC  @ =gUnknown_03000020
	ldr r0, [r0]
	ldrh r0, [r0, #4]
	cmp r3, r0
	bcc _08135DE4
	ldr r0, _08135DE0  @ =0x000080FF
	b _08135E66
_08135DDC:
	.4byte gUnknown_03000020
_08135DE0:
	.4byte 0x000080FF
_08135DE4:
	ldr r0, _08135E70  @ =gUnknown_03000020
	add r6, r0, #0
	ldr r0, [r0]
	ldrb r1, [r0, #8]
	lsl r0, r1, #1
	mov r4, sp
	add r2, r0, r4
	add r2, r2, #2
	mov r4, #0
	cmp r4, r1
	bcs _08135E0E
_08135DFA:
	strh r3, [r2]
	sub r2, r2, #2
	lsr r3, r3, #1
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, [r6]
	ldrb r0, [r0, #8]
	cmp r4, r0
	bcc _08135DFA
_08135E0E:
	mov r0, #1
	strh r0, [r2]
	sub r2, r2, #2
	strh r0, [r2]
	mov r4, #208
	lsl r4, r4, #20
	ldr r0, _08135E70  @ =gUnknown_03000020
	ldr r0, [r0]
	ldrb r2, [r0, #8]
	add r2, r2, #3
	mov r0, sp
	add r1, r4, #0
	bl sub_08135D44
	add r0, r4, #0
	mov r1, sp
	mov r2, #68
	bl sub_08135D44
	add r2, sp, #8
	add r5, r5, #6
	mov r4, #0
	mov r6, #1
_08135E3C:
	mov r1, #0
	mov r3, #0
_08135E40:
	lsl r1, r1, #17
	ldrh r0, [r2]
	and r0, r0, r6
	lsr r1, r1, #16
	orr r1, r1, r0
	add r2, r2, #2
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #15
	bls _08135E40
	strh r1, [r5]
	sub r5, r5, #2
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #3
	bls _08135E3C
	mov r0, #0
_08135E66:
	add sp, sp, #136
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08135E70:
	.4byte gUnknown_03000020
	THUMB_FUNC_END sub_08135DC4

