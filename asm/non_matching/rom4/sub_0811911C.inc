	THUMB_FUNC_START sub_0811911C
sub_0811911C: @ 0x0811911C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r3, _081191AC  @ =gRam
	ldr r1, _081191B0  @ =0x000009AD
	add r0, r3, r1
	ldrb r4, [r0]
	cmp r4, #0
	bne _081191DC
	ldr r2, _081191B4  @ =0x00001844
	add r0, r3, r2
	add r1, r7, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08119156
	strb r4, [r1]
	ldr r5, _081191B8  @ =0x00000E29
	add r0, r3, r5
	add r0, r7, r0
	mov r1, #1
	strb r1, [r0]
_08119156:
	ldr r6, _081191B8  @ =0x00000E29
	add r0, r3, r6
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _081191DC
	ldr r0, _081191BC  @ =0x00000DED
	add r2, r3, r0
	add r2, r7, r2
	ldrb r1, [r2]
	add r1, r1, #252
	strb r1, [r2]
	ldr r5, _081191C0  @ =0x00000DF7
	add r0, r3, r5
	add r0, r7, r0
	strb r1, [r0]
	ldrb r0, [r2]
	cmp r0, #231
	bhi _081191D0
	sub r6, r6, #20
	add r0, r3, r6
	add r0, r7, r0
	strb r4, [r0]
	ldr r1, _081191C4  @ =0x0000176C
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811919A
	ldr r2, _081191C8  @ =0x00001718
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #4
	beq _0811919A
	b _081192D6
_0811919A:
	ldr r4, _081191CC  @ =0x000017D4
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _081191A6
	b _081192D6
_081191A6:
	bl sub_0808B370
	b _081192D6
_081191AC:
	.4byte gRam
_081191B0:
	.4byte 0x000009AD
_081191B4:
	.4byte 0x00001844
_081191B8:
	.4byte 0x00000E29
_081191BC:
	.4byte 0x00000DED
_081191C0:
	.4byte 0x00000DF7
_081191C4:
	.4byte 0x0000176C
_081191C8:
	.4byte 0x00001718
_081191CC:
	.4byte 0x000017D4
_081191D0:
	add r0, r7, #0
	bl sub_080BF774
	add r0, r7, #0
	bl sub_080C1768
_081191DC:
	add r0, r7, #0
	bl sub_080C177C
	ldr r2, _081192E8  @ =gRam
	ldr r5, _081192EC  @ =0x00000DCF
	add r0, r2, r5
	add r0, r7, r0
	ldrb r0, [r0]
	ldr r6, _081192F0  @ =0x0000096C
	add r4, r2, r6
	strb r0, [r4]
	ldr r1, _081192F4  @ =0x00000DE3
	add r0, r2, r1
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r3, _081192F8  @ =0x0000096D
	add r0, r2, r3
	strb r1, [r0]
	ldr r5, _081192FC  @ =0x000016C4
	add r0, r2, r5
	ldrh r1, [r0]
	ldrh r3, [r4]
	sub r0, r1, r3
	add r6, r6, #4
	add r5, r2, r6
	mov r6, #0
	mov r8, r6
	add r1, r1, r0
	ldr r6, _08119300  @ =0x00000952
	add r0, r2, r6
	ldrh r0, [r0]
	sub r1, r1, r0
	strh r1, [r5]
	sub r0, r0, #12
	sub r3, r3, r0
	strh r3, [r4]
	ldr r1, _08119304  @ =0x00000E29
	add r0, r2, r1
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r3, _08119308  @ =0x00000974
	add r0, r2, r3
	strb r1, [r0]
	ldrb r1, [r0]
	ldr r4, _0811930C  @ =0x00001732
	add r3, r2, r4
	mov r0, #1
	strb r0, [r3]
	ldr r5, _08119310  @ =0x00000978
	add r0, r2, r5
	mov r6, r8
	strb r6, [r0]
	ldr r5, _08119314  @ =gUnknown_03003E74
	add r7, r2, #0
	ldr r2, _08119318  @ =0x00000964
	add r2, r2, r7
	mov r10, r2
	mov r9, r0
	mov r8, r3
	ldr r0, _0811931C  @ =gUnknown_0817F358
	add r1, r1, r0
	ldrb r1, [r1]
	str r1, [sp, #4]
_0811925A:
	ldrh r0, [r5]
	mov r3, r10
	ldrh r1, [r3]
	mov r4, #150
	lsl r4, r4, #4
	add r6, r7, r4
	ldrh r2, [r6]
	mov r4, r9
	ldrb r3, [r4]
	mov r4, #36
	orr r3, r3, r4
	lsl r3, r3, #8
	ldr r4, [sp, #4]
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C1918
	lsl r0, r0, #24
	lsr r0, r0, #24
	strh r0, [r5]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r7, r1
	ldrh r0, [r0]
	mov r2, r10
	strh r0, [r2]
	mov r0, #64
	mov r3, r9
	strb r0, [r3]
	mov r4, r8
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811925A
	ldrh r0, [r6, #12]
	strh r0, [r6, #4]
	mov r4, #2
	ldr r5, _08119308  @ =0x00000974
	add r2, r7, r5
	mov r0, #20
	ldrsb r0, [r6, r0]
	cmp r0, #1
	bne _081192C6
	ldrb r4, [r2]
_081192C6:
	ldr r0, _08119314  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldrh r1, [r6, #4]
	ldrh r2, [r6]
	ldr r3, _08119320  @ =0x000024B0
	str r4, [sp]
	bl sub_080C6368
_081192D6:
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
_081192E8:
	.4byte gRam
_081192EC:
	.4byte 0x00000DCF
_081192F0:
	.4byte 0x0000096C
_081192F4:
	.4byte 0x00000DE3
_081192F8:
	.4byte 0x0000096D
_081192FC:
	.4byte 0x000016C4
_08119300:
	.4byte 0x00000952
_08119304:
	.4byte 0x00000E29
_08119308:
	.4byte 0x00000974
_0811930C:
	.4byte 0x00001732
_08119310:
	.4byte 0x00000978
_08119314:
	.4byte gUnknown_03003E74
_08119318:
	.4byte 0x00000964
_0811931C:
	.4byte gUnknown_0817F358
_08119320:
	.4byte 0x000024B0
	THUMB_FUNC_END sub_0811911C

