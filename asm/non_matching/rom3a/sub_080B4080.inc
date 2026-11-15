	THUMB_FUNC_START sub_080B4080
sub_080B4080: @ 0x080B4080
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _080B4198  @ =gRam
	ldr r1, _080B419C  @ =0x00000964
	add r3, r0, r1
	mov r1, #0
	strh r1, [r3]
	ldr r4, _080B41A0  @ =0x00000968
	add r2, r0, r4
	strh r1, [r2]
	mov r8, r0
	add r6, r2, #0
	ldr r7, _080B41A4  @ =gUnknown_02003080
	mov r12, r7
	add r4, r3, #0
	ldr r0, _080B41A8  @ =gUnknown_0816EFD8
	ldrh r0, [r0]
	mov r9, r0
	ldr r1, _080B41A8  @ =gUnknown_0816EFD8
	ldrh r5, [r1, #2]
	mov r2, #128
	lsl r2, r2, #5
	mov r10, r2
_080B40B4:
	mov r3, #0
	ldrsh r0, [r6, r3]
	lsl r0, r0, #1
	ldr r7, _080B41AC  @ =gUnknown_0816EFD4
	add r0, r0, r7
	ldr r2, _080B41B0  @ =gUnknown_03002B9C
	mov r3, #0
	ldrsh r1, [r2, r3]
	ldrh r0, [r0]
	add r2, r1, r0
	ldr r0, _080B41B4  @ =0x000007FF
	and r2, r2, r0
	lsl r1, r2, #1
	add r1, r1, r12
	ldrh r0, [r4]
	mov r7, r9
	orr r0, r0, r7
	strh r0, [r1]
	add r2, r2, #1
	mov r3, #9
	lsl r0, r2, #1
	ldr r7, _080B41A4  @ =gUnknown_02003080
	add r1, r0, r7
_080B40E2:
	ldrh r0, [r4]
	orr r0, r0, r5
	strh r0, [r1]
	sub r3, r3, #1
	add r1, r1, #2
	add r2, r2, #1
	cmp r3, #0
	bge _080B40E2
	lsl r2, r2, #1
	add r2, r2, r12
	ldr r1, _080B41A8  @ =gUnknown_0816EFD8
	ldrh r0, [r1, #4]
	ldrh r1, [r4]
	orr r0, r0, r1
	strh r0, [r2]
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	mov r2, #128
	lsl r2, r2, #4
	add r0, r2, #0
	ldrh r3, [r4]
	add r0, r0, r3
	strh r0, [r4]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, r10
	bne _080B40B4
	mov r3, #0
	ldr r0, _080B41B8  @ =0x0000096C
	add r0, r0, r8
	ldrh r0, [r0]
	ldr r4, _080B41BC  @ =gUnknown_0816EFDE
	ldrh r4, [r4]
	add r0, r0, r4
	ldr r1, _080B41A0  @ =0x00000968
	add r1, r1, r8
	strh r0, [r1]
	ldr r4, _080B419C  @ =0x00000964
	add r4, r4, r8
	add r6, r1, #0
	ldr r7, _080B41A4  @ =gUnknown_02003080
	mov r12, r7
	ldr r0, _080B41C0  @ =gUnknown_0816EFE0
	mov r10, r0
	ldrh r1, [r0]
	mov r8, r1
	sub r2, r2, #1
	mov r9, r2
	ldrh r5, [r0, #2]
_080B4146:
	mov r0, #0
	strh r0, [r4]
	ldrh r0, [r6]
	mov r2, r9
	and r2, r2, r0
	lsl r0, r2, #1
	add r0, r0, r12
	mov r7, r8
	strh r7, [r0]
	add r2, r2, #1
	add r3, r3, #1
	lsl r0, r2, #1
	ldr r7, _080B41A4  @ =gUnknown_02003080
	add r1, r0, r7
_080B4162:
	strh r5, [r1]
	add r1, r1, #2
	add r2, r2, #1
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #10
	bne _080B4162
	lsl r0, r2, #1
	add r0, r0, r12
	mov r2, r10
	ldrh r1, [r2, #4]
	strh r1, [r0]
	ldrh r0, [r6]
	add r0, r0, #32
	strh r0, [r6]
	cmp r3, #8
	bne _080B4146
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B4198:
	.4byte gRam
_080B419C:
	.4byte 0x00000964
_080B41A0:
	.4byte 0x00000968
_080B41A4:
	.4byte gUnknown_02003080
_080B41A8:
	.4byte gUnknown_0816EFD8
_080B41AC:
	.4byte gUnknown_0816EFD4
_080B41B0:
	.4byte gUnknown_03002B9C
_080B41B4:
	.4byte 0x000007FF
_080B41B8:
	.4byte 0x0000096C
_080B41BC:
	.4byte gUnknown_0816EFDE
_080B41C0:
	.4byte gUnknown_0816EFE0
	THUMB_FUNC_END sub_080B4080

