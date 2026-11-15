	THUMB_FUNC_START sub_080E2A88
sub_080E2A88: @ 0x080E2A88
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #26
	str r2, [sp, #4]
	mov r0, #1
	eor r1, r1, r0
	lsl r1, r1, #1
	mov r0, #2
	and r1, r1, r0
	ldr r2, _080E2B7C  @ =gRam
	ldr r3, _080E2B80  @ =0x00000FB2
	add r0, r2, r3
	add r0, r0, r9
	ldrb r0, [r0]
	lsl r0, r0, #2
	orr r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r10, r1
	mov r4, #1
	mov r8, r4
	add r6, r2, #0
_080E2AC8:
	mov r0, r10
	add r0, r0, r8
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r0, _080E2B84  @ =gUnknown_08176E18
	lsl r1, r4, #1
	add r0, r1, r0
	ldrh r0, [r0]
	add r2, r0, #0
	ldr r0, _080E2B88  @ =gUnknown_08176E38
	add r1, r1, r0
	ldrh r0, [r1]
	add r3, r0, #0
	ldr r7, _080E2B8C  @ =0x000015ED
	add r0, r6, r7
	strb r2, [r0]
	ldr r1, _080E2B90  @ =0x000015EC
	add r0, r6, r1
	strb r3, [r0]
	ldr r0, _080E2B94  @ =gUnknown_08176E58
	add r0, r4, r0
	ldrb r5, [r0]
	ldr r7, _080E2B98  @ =0x00000FF2
	add r0, r6, r7
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #71
	bls _080E2B08
	sub r0, r5, #3
	lsl r0, r0, #24
	lsr r5, r0, #24
_080E2B08:
	ldr r0, _080E2B9C  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r1, [sp, #4]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r7, #150
	lsl r7, r7, #4
	add r1, r6, r7
	ldrh r1, [r1]
	add r1, r2, r1
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r7, r7, #4
	add r2, r6, r7
	ldrh r2, [r2]
	add r2, r3, r2
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E2BA0  @ =gUnknown_08176E68
	add r3, r4, r3
	ldrb r3, [r3]
	ldr r4, _080E2BA4  @ =gUnknown_03002B99
	ldrb r4, [r4]
	lsl r4, r4, #24
	asr r4, r4, #24
	orr r3, r3, r4
	lsl r3, r3, #8
	add r3, r5, r3
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r7, #0
	str r7, [sp]
	bl sub_080C6368
	mov r0, r8
	lsl r1, r0, #24
	mov r3, #255
	lsl r3, r3, #24
	add r1, r1, r3
	ldr r0, [sp, #4]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #4]
	lsr r4, r1, #24
	mov r8, r4
	cmp r1, #0
	bge _080E2AC8
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
_080E2B7C:
	.4byte gRam
_080E2B80:
	.4byte 0x00000FB2
_080E2B84:
	.4byte gUnknown_08176E18
_080E2B88:
	.4byte gUnknown_08176E38
_080E2B8C:
	.4byte 0x000015ED
_080E2B90:
	.4byte 0x000015EC
_080E2B94:
	.4byte gUnknown_08176E58
_080E2B98:
	.4byte 0x00000FF2
_080E2B9C:
	.4byte gUnknown_03003E74
_080E2BA0:
	.4byte gUnknown_08176E68
_080E2BA4:
	.4byte gUnknown_03002B99
	THUMB_FUNC_END sub_080E2A88

