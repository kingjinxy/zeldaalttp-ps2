	THUMB_FUNC_START sub_08013E0C
sub_08013E0C: @ 0x08013E0C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r9, r0
	lsl r1, r1, #16
	lsr r6, r1, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r8, r2
	ldr r5, _08013EAC  @ =gUnknown_02016350
	mov r1, #0
	ldrh r0, [r5]
	add r2, r5, #0
	add r2, r2, #128
	cmp r0, r6
	beq _08013E40
_08013E2E:
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r5, r5, #4
	cmp r1, #31
	bhi _08013E40
	ldrh r0, [r5]
	cmp r0, r6
	bne _08013E2E
_08013E40:
	cmp r5, r2
	beq _08013E9E
	ldr r7, _08013EB0  @ =gUnknown_0202A4F0
	ldr r0, _08013EB4  @ =gUnknown_08137B10
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r7]
	ldr r4, [r1]
	and r0, r0, r4
	cmp r0, #0
	bne _08013E9E
	mov r0, #33
	bl play_sound
	ldr r0, [r7]
	orr r0, r0, r4
	str r0, [r7]
	add r0, r6, #0
	mov r1, r8
	bl sub_0800932C
	ldr r2, _08013EB8  @ =gUnknown_08427630
	ldrb r1, [r5, #2]
	mov r0, #31
	and r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r3, [r0]
	add r0, r5, #0
	mov r1, r9
	add r2, r6, #0
	bl _call_via_r3
	add r0, r6, #0
	mov r1, r8
	bl sub_0800932C
	lsl r0, r0, #16
	ldr r1, _08013EBC  @ =0x01070000
	cmp r0, r1
	bne _08013E9E
	mov r0, #132
	lsl r0, r0, #1
	add r1, r6, #0
	mov r2, r8
	bl sub_08014658
_08013E9E:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08013EAC:
	.4byte gUnknown_02016350
_08013EB0:
	.4byte gUnknown_0202A4F0
_08013EB4:
	.4byte gUnknown_08137B10
_08013EB8:
	.4byte gUnknown_08427630
_08013EBC:
	.4byte 0x01070000
	THUMB_FUNC_END sub_08013E0C

