	THUMB_FUNC_START sub_08021860
sub_08021860: @ 0x08021860
	push {r4,r5,lr}
	sub sp, sp, #128
	add r5, r0, #0
	bl GetNextFrame
	add r0, r5, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #0
	beq _08021926
	mov r0, #4
	strb r0, [r5, #20]
	bl sub_0800099C
	mov r1, #1
	and r0, r0, r1
	strb r0, [r5, #11]
	cmp r0, #0
	beq _0802188E
	add r1, r5, #0
	add r1, r1, #43
	mov r0, #16
	b _08021892
_0802188E:
	add r1, r5, #0
	add r1, r1, #43
_08021892:
	strb r0, [r1]
	mov r0, #1
	strb r0, [r5, #23]
	add r1, r5, #0
	add r1, r1, #115
	strb r0, [r1]
	ldr r1, _08021908  @ =gUnknown_0842765C
	ldrb r0, [r5, #10]
	sub r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	bl sub_0800099C
	mov r1, #3
	and r1, r1, r0
	add r4, r4, r1
	ldrb r0, [r4]
	strb r0, [r5, #24]
	mov r0, #128
	lsl r0, r0, #1
	str r0, [r5, #12]
	mov r0, #192
	lsl r0, r0, #10
	str r0, [r5, #16]
	ldrb r0, [r5, #10]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, #1
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r5, #0
	bl sub_08003870
	ldrb r0, [r5, #10]
	cmp r0, #2
	bne _0802190C
	add r1, r5, #0
	add r1, r1, #121
	mov r0, #0
	strb r0, [r1]
	add r2, r5, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r5, #28]
	add r0, r5, #0
	bl sub_0802292C
	b _08021926
	.byte 0x00
	.byte 0x00
_08021908:
	.4byte gUnknown_0842765C
_0802190C:
	cmp r0, #3
	bne _08021920
	bl sub_08003170
	add r1, r5, #0
	add r1, r1, #120
	strb r0, [r1]
	mov r0, #161
	bl play_sound
_08021920:
	mov r0, #49
	bl play_sound
_08021926:
	add sp, sp, #128
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021860

	.byte 0x00
	.byte 0x00
