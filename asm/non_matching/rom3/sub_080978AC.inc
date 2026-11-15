	THUMB_FUNC_START sub_080978AC
sub_080978AC: @ 0x080978AC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	mov r0, #1
	str r0, [sp, #12]
	mov r5, #0
	ldr r7, _08097938  @ =gRam
	mov r1, #0
_080978C2:
	lsl r0, r5, #1
	add r0, sp, r0
	strh r1, [r0]
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #5
	bls _080978C2
	mov r1, #182
	lsl r1, r1, #5
	add r0, r7, r1
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r7, r2
	strb r1, [r0]
	ldr r4, _0809793C  @ =0x000016EC
	add r0, r7, r4
	strb r1, [r0]
	ldr r1, _08097940  @ =0x000016C4
	add r0, r7, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r7, r2
	strb r1, [r0]
	add r4, r4, #4
	add r0, r7, r4
	strb r1, [r0]
	ldr r1, _08097944  @ =0x000016C1
	add r0, r7, r1
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r7, r2
	strb r1, [r0]
	sub r4, r4, #3
	add r0, r7, r4
	strb r1, [r0]
	ldr r1, _08097948  @ =0x000016C5
	add r0, r7, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r7, r2
	strb r1, [r0]
	add r4, r4, #4
	add r0, r7, r4
	strb r1, [r0]
	ldr r1, _0809794C  @ =0x00001718
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #10
	beq _08097954
	ldr r2, _08097950  @ =0x00001783
	add r0, r7, r2
	ldrb r0, [r0]
	cmp r0, #2
	bne _08097954
	bl sub_08097548
	b _08097A4A
_08097938:
	.4byte gRam
_0809793C:
	.4byte 0x000016EC
_08097940:
	.4byte 0x000016C4
_08097944:
	.4byte 0x000016C1
_08097948:
	.4byte 0x000016C5
_0809794C:
	.4byte 0x00001718
_08097950:
	.4byte 0x00001783
_08097954:
	mov r4, #2
	mov r12, r4
	mov r5, #4
	ldr r1, _08097A5C  @ =0x00001702
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809796A
	mov r2, #1
	mov r12, r2
	mov r5, #2
_0809796A:
	lsl r0, r5, #24
	cmp r0, #0
	blt _080979DA
	ldr r4, _08097A60  @ =0x000016D0
	add r4, r4, r7
	mov r10, r4
	ldr r0, _08097A64  @ =0x000016CD
	add r0, r0, r7
	mov r9, r0
	mov r1, #255
	lsl r1, r1, #8
	mov r8, r1
_08097982:
	mov r3, r12
	add r3, r3, r10
	mov r4, r12
	add r4, r4, r9
	ldrb r2, [r4]
	lsl r2, r2, #28
	lsr r2, r2, #24
	ldrb r0, [r3]
	add r2, r2, r0
	add r1, r2, #0
	mov r0, r8
	and r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r6, r0, #31
	strb r2, [r3]
	mov r3, #0
	ldrb r0, [r4]
	lsr r2, r0, #4
	cmp r2, #7
	bls _080979B2
	mov r0, #240
	orr r2, r2, r0
	mov r3, #255
_080979B2:
	lsl r0, r5, #1
	mov r4, sp
	add r1, r4, r0
	add r0, r2, r6
	strh r0, [r1]
	add r0, r5, #1
	lsl r0, r0, #1
	add r1, r4, r0
	lsl r0, r3, #8
	strh r0, [r1]
	sub r1, r5, #2
	lsl r1, r1, #24
	mov r0, r12
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	lsr r5, r1, #24
	cmp r1, #0
	bge _08097982
_080979DA:
	ldr r1, _08097A68  @ =0x00001811
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080979E8
	mov r2, #2
	str r2, [sp, #12]
_080979E8:
	mov r4, #182
	lsl r4, r4, #5
	add r2, r7, r4
	mov r0, sp
	mov r1, sp
	ldrh r0, [r0, #2]
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldr r1, [sp, #12]
	mul r0, r1, r0
	ldrh r4, [r2]
	add r0, r0, r4
	strh r0, [r2]
	ldr r0, _08097A6C  @ =0x000016C4
	add r2, r7, r0
	mov r1, sp
	mov r0, sp
	ldrh r0, [r0, #4]
	ldrh r1, [r1, #6]
	add r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldr r1, [sp, #12]
	mul r0, r1, r0
	ldrh r4, [r2]
	add r0, r0, r4
	strh r0, [r2]
	ldr r0, _08097A70  @ =0x000016C8
	add r2, r7, r0
	mov r1, sp
	mov r0, sp
	ldrh r0, [r0, #8]
	ldrh r1, [r1, #10]
	add r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldr r1, [sp, #12]
	mul r0, r1, r0
	ldrh r4, [r2]
	add r0, r0, r4
	strh r0, [r2]
	bl sub_080972EC
	bl sub_080973A8
	bl sub_08097548
_08097A4A:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08097A5C:
	.4byte 0x00001702
_08097A60:
	.4byte 0x000016D0
_08097A64:
	.4byte 0x000016CD
_08097A68:
	.4byte 0x00001811
_08097A6C:
	.4byte 0x000016C4
_08097A70:
	.4byte 0x000016C8
	THUMB_FUNC_END sub_080978AC

