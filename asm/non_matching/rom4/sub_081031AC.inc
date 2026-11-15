	THUMB_FUNC_START sub_081031AC
sub_081031AC: @ 0x081031AC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r4, sp
	add r4, r4, #5
	add r0, sp, #4
	add r1, r4, #0
	add r2, r7, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _08103254
	ldrb r0, [r4]
	cmp r0, #0
	bne _08103254
	ldr r6, _08103260  @ =gRam
	ldr r1, _08103264  @ =0x00000F62
	add r0, r6, r1
	add r0, r7, r0
	ldrb r5, [r0]
	ldr r2, _08103268  @ =gUnknown_03003E74
	mov r8, r2
	add r0, sp, #4
	ldrb r1, [r0]
	ldrh r0, [r2]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #150
	lsl r1, r1, #4
	add r2, r6, r1
	ldr r1, _0810326C  @ =gUnknown_0817B9BC
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _08103270  @ =0x00000964
	add r4, r6, r2
	ldr r2, _08103274  @ =gUnknown_0817B9DC
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _08103278  @ =gUnknown_0817B9FC
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _0810327C  @ =gUnknown_0817BA0C
	add r5, r5, r4
	ldrb r4, [r5]
	ldr r5, _08103280  @ =0x00000969
	ldrsb r5, [r5, r6]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r2, _08103284  @ =0x00000F92
	add r6, r6, r2
	add r6, r7, r6
	ldrb r1, [r6]
	lsl r1, r1, #5
	ldr r0, _08103288  @ =gUnknown_0817B93C
	add r1, r1, r0
	add r0, r7, #0
	mov r2, #4
	bl sub_080C9480
_08103254:
	add sp, sp, #8
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08103260:
	.4byte gRam
_08103264:
	.4byte 0x00000F62
_08103268:
	.4byte gUnknown_03003E74
_0810326C:
	.4byte gUnknown_0817B9BC
_08103270:
	.4byte 0x00000964
_08103274:
	.4byte gUnknown_0817B9DC
_08103278:
	.4byte gUnknown_0817B9FC
_0810327C:
	.4byte gUnknown_0817BA0C
_08103280:
	.4byte 0x00000969
_08103284:
	.4byte 0x00000F92
_08103288:
	.4byte gUnknown_0817B93C
	THUMB_FUNC_END sub_081031AC

