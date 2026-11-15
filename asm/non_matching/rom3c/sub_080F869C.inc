	THUMB_FUNC_START sub_080F869C
sub_080F869C: @ 0x080F869C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F877E
	ldr r1, _080F8790  @ =gUnknown_08179FDC
	ldr r2, _080F8794  @ =gRam
	ldr r3, _080F8798  @ =0x00000FB2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r7, _080F879C  @ =0x00000F62
	add r0, r2, r7
	add r0, r4, r0
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r0, #4
	str r0, [sp, #8]
	mov r8, r2
	ldr r1, _080F87A0  @ =0x00000964
	add r1, r1, r8
	mov r10, r1
_080F86EE:
	ldr r0, [sp, #8]
	add r0, r0, r9
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r0, _080F87A4  @ =gUnknown_0817A0D0
	add r0, r5, r0
	ldrb r0, [r0]
	add r6, r0, #0
	ldr r0, _080F87A8  @ =gUnknown_0817A10C
	add r0, r5, r0
	ldr r1, _080F87AC  @ =0x00000969
	add r1, r1, r8
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r4, r0, #0
	orr r4, r4, r2
	add r0, r6, #0
	sub r0, r0, #36
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _080F8724
	mov r0, #241
	and r4, r4, r0
	mov r0, #6
	orr r4, r4, r0
_080F8724:
	ldr r2, _080F87B0  @ =gUnknown_03003E74
	add r0, sp, #4
	ldrb r1, [r0]
	ldrh r0, [r2]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _080F87B4  @ =gUnknown_08179FE0
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080F87B8  @ =gUnknown_0817A058
	add r3, r3, r2
	ldrh r2, [r3]
	mov r3, r10
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	lsl r3, r4, #8
	add r3, r6, r3
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080F87BC  @ =gUnknown_0817A148
	add r4, r5, r4
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	ldr r7, [sp, #8]
	lsl r0, r7, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r3, r0, #24
	str r3, [sp, #8]
	cmp r0, #0
	bge _080F86EE
_080F877E:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F8790:
	.4byte gUnknown_08179FDC
_080F8794:
	.4byte gRam
_080F8798:
	.4byte 0x00000FB2
_080F879C:
	.4byte 0x00000F62
_080F87A0:
	.4byte 0x00000964
_080F87A4:
	.4byte gUnknown_0817A0D0
_080F87A8:
	.4byte gUnknown_0817A10C
_080F87AC:
	.4byte 0x00000969
_080F87B0:
	.4byte gUnknown_03003E74
_080F87B4:
	.4byte gUnknown_08179FE0
_080F87B8:
	.4byte gUnknown_0817A058
_080F87BC:
	.4byte gUnknown_0817A148
	THUMB_FUNC_END sub_080F869C

