	THUMB_FUNC_START sub_0810D6CC
sub_0810D6CC: @ 0x0810D6CC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r7, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810D770
	add r0, r7, #0
	bl sub_080C6340
	ldr r5, _0810D780  @ =gRam
	ldr r1, _0810D784  @ =gUnknown_0817CEE3
	ldr r2, _0810D788  @ =0x00000F92
	add r0, r5, r2
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r3, _0810D78C  @ =gUnknown_03002B9C
	strh r0, [r3]
	ldr r6, _0810D790  @ =gUnknown_03003E74
	ldrh r0, [r6]
	mov r4, #150
	lsl r4, r4, #4
	add r4, r4, r5
	mov r10, r4
	ldrh r1, [r4]
	ldr r2, _0810D794  @ =0x00000964
	add r2, r2, r5
	mov r9, r2
	ldrh r2, [r2]
	sub r2, r2, #1
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _0810D798  @ =0x00000969
	add r5, r5, r3
	ldrb r3, [r5]
	lsl r3, r3, #8
	mov r4, #222
	orr r3, r3, r4
	mov r4, #2
	mov r8, r4
	str r4, [sp]
	bl sub_080C6004
	ldrh r0, [r6]
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, r10
	ldrh r1, [r2]
	mov r3, r9
	ldrh r2, [r3]
	sub r2, r2, #1
	ldr r4, _0810D78C  @ =gUnknown_03002B9C
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldrb r3, [r5]
	lsl r3, r3, #8
	mov r4, #158
	orr r3, r3, r4
	mov r4, r8
	str r4, [sp]
	bl sub_080C6004
	add r0, r7, #0
	mov r1, #2
	mov r2, #1
	bl sub_080C6350
_0810D770:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0810D780:
	.4byte gRam
_0810D784:
	.4byte gUnknown_0817CEE3
_0810D788:
	.4byte 0x00000F92
_0810D78C:
	.4byte gUnknown_03002B9C
_0810D790:
	.4byte gUnknown_03003E74
_0810D794:
	.4byte 0x00000964
_0810D798:
	.4byte 0x00000969
	THUMB_FUNC_END sub_0810D6CC

