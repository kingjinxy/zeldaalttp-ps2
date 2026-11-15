	THUMB_FUNC_START sub_080D891C
sub_080D891C: @ 0x080D891C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r10
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D8942
	b _080D8BBC
_080D8942:
	ldr r1, _080D89A8  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080D89AC  @ =0x000015E8
	add r0, r1, r3
	strb r2, [r0]
	ldr r4, _080D89B0  @ =0x00000964
	add r0, r1, r4
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	ldr r4, _080D89B4  @ =0x00000F62
	add r0, r1, r4
	add r0, r0, r10
	ldrb r3, [r0]
	ldr r0, _080D89B8  @ =0x00000F72
	add r1, r1, r0
	add r1, r1, r10
	ldrb r0, [r1]
	lsl r0, r0, #8
	orr r3, r3, r0
	mov r7, #64
	add r5, r3, #0
	add r5, r5, #128
	ldr r1, _080D89BC  @ =0x000001FF
	add r0, r1, #0
	and r5, r5, r0
	ldr r1, _080D89C0  @ =gUnknown_08173F38
	mov r6, #255
	add r0, r3, #0
	and r0, r0, r6
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r2, [r0]
	add r0, r5, #0
	and r0, r0, r6
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r4, [r0]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r2
	cmp r0, #0
	beq _080D89C4
	mov r2, #64
	str r2, [sp, #8]
	b _080D89D4
	.byte 0x00
	.byte 0x00
_080D89A8:
	.4byte gRam
_080D89AC:
	.4byte 0x000015E8
_080D89B0:
	.4byte 0x00000964
_080D89B4:
	.4byte 0x00000F62
_080D89B8:
	.4byte 0x00000F72
_080D89BC:
	.4byte 0x000001FF
_080D89C0:
	.4byte gUnknown_08173F38
_080D89C4:
	and r2, r2, r6
	lsl r0, r2, #22
	lsr r2, r0, #24
	lsr r0, r0, #23
	mov r1, #1
	and r0, r0, r1
	add r0, r2, r0
	str r0, [sp, #8]
_080D89D4:
	ldr r0, [sp, #8]
	str r0, [sp, #12]
	mov r0, #128
	lsl r0, r0, #1
	and r3, r3, r0
	cmp r3, #0
	beq _080D89EC
	ldr r1, [sp, #12]
	neg r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #12]
_080D89EC:
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r4
	cmp r0, #0
	beq _080D89FA
	mov r9, r7
	b _080D8A10
_080D89FA:
	mov r0, #255
	and r4, r4, r0
	add r0, r4, #0
	mul r0, r7, r0
	lsl r0, r0, #16
	lsr r2, r0, #24
	lsr r0, r0, #23
	mov r1, #1
	and r0, r0, r1
	add r2, r2, r0
	mov r9, r2
_080D8A10:
	mov r7, r9
	mov r0, #128
	lsl r0, r0, #1
	and r5, r5, r0
	cmp r5, #0
	beq _080D8A24
	mov r2, r9
	neg r0, r2
	lsl r0, r0, #24
	lsr r7, r0, #24
_080D8A24:
	ldr r5, _080D8BCC  @ =gRam
	ldr r3, _080D8BD0  @ =0x00001052
	add r0, r5, r3
	add r0, r0, r10
	ldrb r0, [r0]
	lsl r0, r0, #4
	mov r4, #64
	neg r4, r4
	add r1, r4, #0
	and r0, r0, r1
	ldr r2, _080D8BD4  @ =0x00000969
	add r1, r5, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r3, _080D8BD8  @ =0x00000979
	add r6, r5, r3
	strb r0, [r6]
	ldr r0, _080D8BDC  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r4, _080D8BE0  @ =0x000015E8
	add r1, r5, r4
	ldrb r1, [r1]
	ldr r2, [sp, #12]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080D8BE4  @ =0x000015E9
	add r2, r5, r3
	ldrb r2, [r2]
	add r2, r2, r7
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r3, #0
	ldrsb r3, [r6, r3]
	lsl r3, r3, #8
	mov r4, #72
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6004
	mov r2, #2
	add r1, sp, #4
	mov r0, #1
	strb r0, [r1]
	mov r4, #128
	and r7, r7, r4
	lsl r0, r7, #24
	lsr r0, r0, #24
	str r0, [sp, #16]
	add r7, r1, #0
	mov r8, r5
_080D8A90:
	ldr r1, _080D8BE8  @ =gUnknown_081757F8
	lsl r0, r2, #24
	asr r5, r0, #24
	add r1, r5, r1
	ldrb r1, [r1]
	ldr r2, [sp, #8]
	add r0, r2, #0
	mul r0, r1, r0
	lsr r3, r0, #8
	ldr r0, [sp, #12]
	mov r4, #128
	and r0, r0, r4
	cmp r0, #0
	beq _080D8AB2
	neg r0, r3
	lsl r0, r0, #24
	lsr r3, r0, #24
_080D8AB2:
	mov r0, r9
	mul r0, r1, r0
	lsr r2, r0, #8
	ldr r0, [sp, #16]
	cmp r0, #0
	beq _080D8AC4
	lsl r0, r2, #24
	neg r0, r0
	lsr r2, r0, #24
_080D8AC4:
	ldr r0, _080D8BDC  @ =gUnknown_03003E74
	ldrb r1, [r7]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r3, #24
	ldr r6, _080D8BE0  @ =0x000015E8
	add r6, r6, r8
	asr r1, r1, #24
	ldrb r3, [r6]
	add r1, r1, r3
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsl r2, r2, #24
	ldr r3, _080D8BE4  @ =0x000015E9
	add r3, r3, r8
	asr r2, r2, #24
	ldrb r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _080D8BEC  @ =gUnknown_03002BA9
	mov r3, #0
	ldrsb r3, [r4, r3]
	lsl r3, r3, #8
	mov r4, #72
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6004
	sub r1, r5, #1
	lsl r1, r1, #24
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r2, r1, #24
	cmp r1, #0
	bge _080D8A90
	mov r0, r10
	mov r1, #255
	mov r2, #3
	bl sub_080C6350
	ldr r0, _080D8BF0  @ =0x00000996
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, r10
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080D8BF4  @ =0x000009AD
	add r1, r1, r8
	ldrb r1, [r1]
	orr r0, r0, r1
	ldrb r1, [r6, #29]
	orr r0, r0, r1
	cmp r0, #0
	bne _080D8BBC
	mov r2, #0
	mov r4, #170
	lsl r4, r4, #3
	add r4, r4, r8
	mov r5, #182
	lsl r5, r5, #5
	add r5, r5, r8
_080D8B4E:
	ldr r1, _080D8BDC  @ =gUnknown_03003E74
	lsl r2, r2, #24
	asr r0, r2, #24
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #3
	add r3, r0, r4
	ldrh r0, [r3, #2]
	lsl r0, r0, #23
	lsr r1, r0, #23
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	add r6, r2, #0
	cmp r0, #0
	bne _080D8BAE
	ldr r2, _080D8BF8  @ =0x00000402
	add r0, r4, r2
	ldrh r0, [r0]
	add r0, r1, r0
	ldr r2, _080D8BFC  @ =0x00001174
	add r1, r4, r2
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #12
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #23
	bhi _080D8BAE
	ldrb r0, [r3]
	cmp r0, #239
	bhi _080D8BAE
	mov r1, #129
	lsl r1, r1, #3
	add r0, r4, r1
	ldrh r0, [r0]
	ldrb r3, [r3]
	add r0, r0, r3
	ldrh r1, [r5]
	sub r0, r0, r1
	add r0, r0, #4
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #15
	bhi _080D8BAE
	mov r0, r10
	bl sub_080C3BD0
_080D8BAE:
	mov r2, #128
	lsl r2, r2, #17
	add r0, r6, r2
	lsr r2, r0, #24
	asr r0, r0, #24
	cmp r0, #3
	ble _080D8B4E
_080D8BBC:
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080D8BCC:
	.4byte gRam
_080D8BD0:
	.4byte 0x00001052
_080D8BD4:
	.4byte 0x00000969
_080D8BD8:
	.4byte 0x00000979
_080D8BDC:
	.4byte gUnknown_03003E74
_080D8BE0:
	.4byte 0x000015E8
_080D8BE4:
	.4byte 0x000015E9
_080D8BE8:
	.4byte gUnknown_081757F8
_080D8BEC:
	.4byte gUnknown_03002BA9
_080D8BF0:
	.4byte 0x00000996
_080D8BF4:
	.4byte 0x000009AD
_080D8BF8:
	.4byte 0x00000402
_080D8BFC:
	.4byte 0x00001174
	THUMB_FUNC_END sub_080D891C

