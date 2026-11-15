	THUMB_FUNC_START sub_0812B7B4
sub_0812B7B4: @ 0x0812B7B4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	add r5, r0, #0
	mov r8, r3
	lsl r1, r1, #24
	lsr r7, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r10, r2
	ldr r4, [r5, #8]
	mov r9, r7
	add r0, r0, #74
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812B7DC
	b _0812B970
_0812B7DC:
	add r0, r5, #0
	add r0, r0, #81
	ldrb r0, [r0]
	add r0, r7, r0
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r5, #0
	add r1, r7, #0
	mov r2, sp
	bl sub_0812AB30
	ldr r6, [sp]
	ldrb r1, [r6, #1]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _0812B802
	ldrh r1, [r4, #48]
	b _0812B80A
_0812B802:
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldrh r4, [r4, #48]
	add r1, r1, r4
_0812B80A:
	mov r0, r8
	bl __udivsi3
	mov r8, r0
	add r0, r5, #0
	add r0, r0, #73
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812B826
	ldr r0, [r5, #12]
	cmp r0, #0
	beq _0812B826
	add r4, r0, #0
	b _0812B87C
_0812B826:
	ldr r1, _0812B894  @ =gUnknown_08198EAC
	ldrb r0, [r6]
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r5, #0
	add r1, r1, #82
	ldrb r1, [r1]
	bl sub_0812BC64
	add r4, r0, #0
	cmp r4, #0
	bne _0812B840
	b _0812B970
_0812B840:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0812C2C4
	mov r1, #0
	mov r0, r9
	strb r0, [r4, #9]
	str r1, [r4, #96]
	add r0, r5, #0
	add r0, r0, #16
	str r0, [r4, #40]
	str r1, [r4, #32]
	ldrh r0, [r5, #16]
	str r0, [r4, #36]
	ldr r0, [sp, #4]
	str r0, [r4, #76]
	str r1, [r4, #64]
	str r1, [r4, #68]
	add r0, r4, #0
	add r0, r0, #72
	strh r1, [r0]
	add r1, r4, #0
	add r1, r1, #80
	mov r0, #255
	strb r0, [r1]
	ldrb r1, [r6, #6]
	add r0, r4, #0
	add r0, r0, #88
	strb r1, [r0]
	str r6, [r4, #84]
_0812B87C:
	mov r0, sp
	ldrb r0, [r0, #17]
	strb r0, [r4, #27]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0812B898
	mov r7, #48
	mov r0, sp
	ldrb r0, [r0, #16]
	strb r0, [r4, #28]
	b _0812B8A2
	.byte 0x00
	.byte 0x00
_0812B894:
	.4byte gUnknown_08198EAC
_0812B898:
	mov r0, sp
	ldrb r0, [r0, #18]
	cmp r0, #0
	beq _0812B8A2
	mov r7, #48
_0812B8A2:
	mov r0, #0
	mov r1, r10
	strb r1, [r4, #10]
	str r0, [r4, #20]
	mov r0, r8
	strh r0, [r4, #24]
	add r0, r5, #0
	add r0, r0, #76
	ldrb r0, [r0]
	strb r0, [r4, #26]
	ldrb r2, [r6, #7]
	add r0, r4, #0
	add r1, r7, #0
	bl sub_0812AE7C
	str r0, [r4, #12]
	ldrb r0, [r5, #28]
	cmp r0, #0
	bne _0812B8D4
	add r0, r4, #0
	add r0, r0, #44
	mov r1, #20
	bl sub_08069358
	b _0812B92E
_0812B8D4:
	ldrb r1, [r5, #30]
	ldrb r2, [r6, #7]
	add r0, r4, #0
	bl sub_0812AE7C
	add r2, r0, #0
	ldrh r0, [r5, #32]
	str r0, [r4, #44]
	ldrh r0, [r5, #34]
	mov r1, r8
	mul r1, r0, r1
	add r0, r1, #0
	lsr r0, r0, #8
	str r0, [r4, #48]
	ldrb r1, [r5, #29]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0812B902
	ldr r0, [r4, #12]
	sub r0, r2, r0
	str r0, [r4, #56]
	b _0812B90A
_0812B902:
	ldr r0, [r4, #12]
	sub r0, r0, r2
	str r0, [r4, #56]
	str r2, [r4, #12]
_0812B90A:
	ldr r0, [r4, #56]
	str r0, [r4, #60]
	ldr r1, [r4, #48]
	bl __divsi3
	str r0, [r4, #60]
	ldrb r1, [r5, #29]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _0812B928
	strb r7, [r5, #30]
	b _0812B92A
_0812B928:
	strb r0, [r5, #28]
_0812B92A:
	mov r0, #0
	str r0, [r4, #52]
_0812B92E:
	ldrb r0, [r4]
	cmp r0, #0
	bne _0812B944
	ldrh r0, [r6, #2]
	ldr r1, [r5, #4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r1, r0
	str r1, [r4, #92]
	b _0812B964
_0812B944:
	cmp r0, #3
	beq _0812B960
	ldrb r1, [r6, #1]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0812B956
	ldr r0, [sp, #8]
	b _0812B962
_0812B956:
	ldrh r1, [r6, #2]
	add r0, r4, #0
	add r0, r0, #100
	strb r1, [r0]
	b _0812B964
_0812B960:
	ldr r0, [sp, #12]
_0812B962:
	str r0, [r4, #100]
_0812B964:
	mov r0, r8
	cmp r0, #0
	bne _0812B970
	add r0, r4, #0
	bl sub_0812B980
_0812B970:
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812B7B4

