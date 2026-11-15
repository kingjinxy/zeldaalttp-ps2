	THUMB_FUNC_START sub_0811B6A4
sub_0811B6A4: @ 0x0811B6A4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C17A8
	ldr r2, _0811B7E4  @ =gRam
	lsl r3, r4, #1
	ldr r1, _0811B7E8  @ =0x0000184D
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r5, _0811B7EC  @ =0x00000958
	add r0, r2, r5
	ldrh r0, [r0]
	sub r1, r1, r0
	add r5, r5, #32
	add r0, r2, r5
	mov r5, #0
	strh r1, [r0]
	ldr r1, _0811B7F0  @ =0x00001849
	add r0, r2, r1
	add r3, r3, r0
	ldrb r1, [r3]
	ldr r3, _0811B7F4  @ =0x00000952
	add r0, r2, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	add r3, r3, #42
	add r0, r2, r3
	strh r1, [r0]
	ldr r0, _0811B7F8  @ =0x0000096C
	add r0, r0, r2
	mov r8, r0
	strb r5, [r0]
	ldr r1, _0811B7FC  @ =0x00001855
	add r0, r2, r1
	add r0, r4, r0
	ldrb r3, [r0]
	lsl r3, r3, #2
	ldr r0, _0811B800  @ =0x00000968
	add r5, r2, r0
	strb r3, [r5]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r2, r1
	strb r3, [r0]
	ldr r1, _0811B804  @ =0x00001851
	add r0, r2, r1
	add r4, r4, r0
	ldrb r0, [r4]
	lsl r0, r0, #4
	ldr r4, _0811B808  @ =0x00000974
	add r1, r2, r4
	strb r0, [r1]
	add r0, r0, r3
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r7, r2, #0
	mov r9, r8
	ldr r5, _0811B80C  @ =0x00000964
	add r5, r5, r7
	mov r10, r5
	ldr r0, _0811B810  @ =gUnknown_03003E74
	mov r8, r0
_0811B732:
	ldr r2, _0811B808  @ =0x00000974
	add r1, r7, r2
	mov r3, #151
	lsl r3, r3, #4
	add r0, r7, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #1
	ldr r4, _0811B814  @ =gUnknown_03002B98
	strb r0, [r4]
	mov r5, r9
	ldrb r1, [r5]
	lsl r1, r1, #2
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r0, r2, #0
	ldr r1, _0811B818  @ =gUnknown_0817F738
	add r0, r0, r1
	add r3, r3, #8
	add r1, r7, r3
	ldrh r1, [r1]
	ldrh r0, [r0]
	add r1, r1, r0
	ldr r4, _0811B81C  @ =gUnknown_03002B90
	strh r1, [r4]
	add r2, r2, #2
	ldr r5, _0811B818  @ =gUnknown_0817F738
	add r2, r2, r5
	ldr r1, _0811B820  @ =0x0000097C
	add r0, r7, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r2, r10
	strh r0, [r2]
	ldr r1, _0811B824  @ =gUnknown_0817F7B8
	lsl r0, r6, #1
	add r0, r0, r1
	ldrh r5, [r0]
	ldrb r3, [r0]
	lsr r5, r5, #8
	mov r4, r8
	ldrh r0, [r4]
	ldrh r1, [r2]
	ldr r2, _0811B81C  @ =gUnknown_03002B90
	ldrh r2, [r2]
	str r2, [sp, #4]
	mov r4, #192
	and r5, r5, r4
	ldr r4, _0811B828  @ =gUnknown_03003954
	ldrb r4, [r4]
	mov r12, r4
	mov r2, r12
	orr r5, r5, r2
	lsl r5, r5, #8
	orr r3, r3, r5
	mov r4, #0
	str r4, [sp]
	ldr r2, [sp, #4]
	bl sub_080C6368
	mov r5, r8
	ldrb r0, [r5]
	bl sub_080C1918
	lsl r0, r0, #24
	lsr r0, r0, #24
	strh r0, [r5]
	add r0, r6, #2
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, r9
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #2
	bne _0811B732
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0811B7E4:
	.4byte gRam
_0811B7E8:
	.4byte 0x0000184D
_0811B7EC:
	.4byte 0x00000958
_0811B7F0:
	.4byte 0x00001849
_0811B7F4:
	.4byte 0x00000952
_0811B7F8:
	.4byte 0x0000096C
_0811B7FC:
	.4byte 0x00001855
_0811B800:
	.4byte 0x00000968
_0811B804:
	.4byte 0x00001851
_0811B808:
	.4byte 0x00000974
_0811B80C:
	.4byte 0x00000964
_0811B810:
	.4byte gUnknown_03003E74
_0811B814:
	.4byte gUnknown_03002B98
_0811B818:
	.4byte gUnknown_0817F738
_0811B81C:
	.4byte gUnknown_03002B90
_0811B820:
	.4byte 0x0000097C
_0811B824:
	.4byte gUnknown_0817F7B8
_0811B828:
	.4byte gUnknown_03003954
	THUMB_FUNC_END sub_0811B6A4

