	THUMB_FUNC_START sub_08116F8C
sub_08116F8C: @ 0x08116F8C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	bl sub_080C10D4
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811705C
	ldr r2, _08116FC4  @ =gRam
	ldr r1, _08116FC8  @ =0x00000E33
	add r0, r2, r1
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _08116FD0
	ldr r3, _08116FCC  @ =0x00000E15
	add r0, r2, r3
	add r0, r0, r8
	strb r1, [r0]
	b _0811705C
	.byte 0x00
	.byte 0x00
_08116FC4:
	.4byte gRam
_08116FC8:
	.4byte 0x00000E33
_08116FCC:
	.4byte 0x00000E15
_08116FD0:
	lsr r1, r0, #25
	ldr r5, _0811706C  @ =0x00000964
	add r0, r2, r5
	strb r1, [r0]
	mov r6, #3
	add r7, r2, #0
	ldr r0, _08117070  @ =0x00000968
	add r0, r0, r7
	mov r9, r0
_08116FE2:
	ldr r1, _0811706C  @ =0x00000964
	add r0, r7, r1
	ldrb r5, [r0]
	lsl r5, r5, #2
	add r5, r5, r6
	lsl r5, r5, #24
	lsr r5, r5, #24
	mov r3, #150
	lsl r3, r3, #4
	add r2, r7, r3
	ldr r0, _08117074  @ =gUnknown_0817EF30
	add r0, r5, r0
	ldrb r1, [r0]
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _08117078  @ =0x00000961
	add r3, r7, r0
	ldr r0, _0811707C  @ =gUnknown_0817EF40
	add r0, r5, r0
	ldrb r2, [r0]
	ldrb r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r0, _08117080  @ =gUnknown_03003E74
	sub r3, r6, #3
	ldrh r0, [r0]
	sub r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _08117084  @ =gUnknown_0817EF50
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _08117088  @ =gUnknown_0817EF60
	add r5, r5, r4
	ldrb r5, [r5]
	mov r4, #2
	orr r4, r4, r5
	mov r5, r9
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	sub r6, r6, #1
	cmp r6, #0
	bge _08116FE2
	mov r0, r8
	mov r1, #0
	mov r2, #3
	bl sub_080C0ED8
_0811705C:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811706C:
	.4byte 0x00000964
_08117070:
	.4byte 0x00000968
_08117074:
	.4byte gUnknown_0817EF30
_08117078:
	.4byte 0x00000961
_0811707C:
	.4byte gUnknown_0817EF40
_08117080:
	.4byte gUnknown_03003E74
_08117084:
	.4byte gUnknown_0817EF50
_08117088:
	.4byte gUnknown_0817EF60
	THUMB_FUNC_END sub_08116F8C

