	THUMB_FUNC_START sub_080DA390
sub_080DA390: @ 0x080DA390
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #56
	bl sub_080CF370
	ldr r0, _080DA464  @ =gUnknown_08175A9C
	str r0, [sp, #4]
	ldr r5, _080DA468  @ =gRam
	ldr r1, _080DA46C  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080DA3BE
	ldr r0, _080DA470  @ =gUnknown_08175AD4
	str r0, [sp, #4]
_080DA3BE:
	ldr r1, _080DA474  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	ldrb r3, [r0]
	cmp r3, #0
	beq _080DA452
	ldr r2, _080DA478  @ =gUnknown_08175B1A
	sub r1, r1, #80
	add r0, r5, r1
	add r4, r4, r0
	ldrb r1, [r4]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r2
	ldrb r7, [r0]
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	cmp r8, r1
	beq _080DA452
	mov r9, r5
	mov r10, r4
_080DA3EE:
	ldr r0, _080DA47C  @ =gUnknown_03003E74
	lsr r6, r7, #2
	ldrh r0, [r0]
	add r0, r0, r6
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r1, [sp, #4]
	add r4, r1, r7
	mov r1, #0
	ldrsb r1, [r4, r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080DA480  @ =0x00000964
	add r2, r2, r9
	ldrh r3, [r2]
	sub r3, r3, #8
	mov r2, #1
	ldrsb r2, [r4, r2]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldrb r3, [r4, #2]
	ldrb r5, [r4, #3]
	mov r4, #49
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, _080DA484  @ =gUnknown_08175B0C
	add r6, r4, r6
	ldrb r4, [r6]
	str r4, [sp]
	bl sub_080C6004
	add r0, r7, #4
	lsl r0, r0, #16
	lsr r7, r0, #16
	mov r0, r8
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r0, r10
	ldrb r0, [r0]
	cmp r8, r0
	bne _080DA3EE
_080DA452:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DA464:
	.4byte gUnknown_08175A9C
_080DA468:
	.4byte gRam
_080DA46C:
	.4byte 0x00000996
_080DA470:
	.4byte gUnknown_08175AD4
_080DA474:
	.4byte 0x00001052
_080DA478:
	.4byte gUnknown_08175B1A
_080DA47C:
	.4byte gUnknown_03003E74
_080DA480:
	.4byte 0x00000964
_080DA484:
	.4byte gUnknown_08175B0C
	THUMB_FUNC_END sub_080DA390

