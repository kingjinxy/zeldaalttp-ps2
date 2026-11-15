	THUMB_FUNC_START sub_080BD144
sub_080BD144: @ 0x080BD144
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	ldr r4, _080BD250  @ =gRam
	ldr r0, _080BD254  @ =0x000009AD
	add r5, r4, r0
	ldrb r1, [r5]
	str r1, [sp]
	ldr r2, _080BD258  @ =0x0000164C
	add r6, r4, r2
	ldrb r7, [r6]
	str r7, [sp, #4]
	ldr r0, _080BD25C  @ =0x000016C4
	add r2, r4, r0
	ldrh r1, [r2]
	str r1, [sp, #8]
	mov r7, #182
	lsl r7, r7, #5
	add r3, r4, r7
	ldrh r0, [r3]
	str r0, [sp, #12]
	ldr r1, _080BD260  @ =gUnknown_08173F38
	ldr r7, _080BD264  @ =0x00000996
	add r0, r4, r7
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	lsr r0, r0, #2
	ldr r1, _080BD268  @ =0x00001A50
	add r0, r0, r1
	mov r1, #0
	strh r0, [r2]
	mov r0, #192
	lsl r0, r0, #1
	strh r0, [r3]
	strb r1, [r5]
	bl sub_080CE350
	mov r2, sp
	ldrb r2, [r2]
	strb r2, [r5]
	mov r0, #1
	strb r0, [r6]
	mov r6, #15
	mov r8, r4
	mov r9, r5
	ldr r7, _080BD26C  @ =0x00000FA2
	add r7, r7, r8
	mov r10, r7
_080BD1AE:
	ldr r0, _080BD270  @ =0x00000FF2
	add r0, r0, r8
	add r7, r6, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _080BD204
	lsl r4, r6, #24
	lsr r4, r4, #24
	ldr r0, _080BD274  @ =0x00001012
	add r0, r0, r8
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r1, _080BD278  @ =0x000015DC
	add r1, r1, r8
	strb r4, [r1]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r0, r9
	ldrb r5, [r0]
	mov r1, #0
	strb r1, [r0]
	mov r2, r10
	add r1, r4, r2
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r0, r9
	strb r5, [r0]
	mov r1, r10
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BD204
	strb r0, [r7]
_080BD204:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BD1AE
	ldr r4, _080BD250  @ =gRam
	ldr r2, _080BD254  @ =0x000009AD
	add r5, r4, r2
	mov r0, #0
	strb r0, [r5]
	bl sub_080CE324
	mov r7, sp
	ldrb r7, [r7]
	strb r7, [r5]
	ldr r1, _080BD25C  @ =0x000016C4
	add r0, r4, r1
	mov r2, sp
	ldrh r2, [r2, #8]
	strh r2, [r0]
	mov r7, #182
	lsl r7, r7, #5
	add r0, r4, r7
	mov r1, sp
	ldrh r1, [r1, #12]
	strh r1, [r0]
	ldr r2, _080BD258  @ =0x0000164C
	add r4, r4, r2
	mov r7, sp
	ldrb r7, [r7, #4]
	strb r7, [r4]
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
_080BD250:
	.4byte gRam
_080BD254:
	.4byte 0x000009AD
_080BD258:
	.4byte 0x0000164C
_080BD25C:
	.4byte 0x000016C4
_080BD260:
	.4byte gUnknown_08173F38
_080BD264:
	.4byte 0x00000996
_080BD268:
	.4byte 0x00001A50
_080BD26C:
	.4byte 0x00000FA2
_080BD270:
	.4byte 0x00000FF2
_080BD274:
	.4byte 0x00001012
_080BD278:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080BD144

