	THUMB_FUNC_START sub_08116E94
sub_08116E94: @ 0x08116E94
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	bl sub_080C17A8
	ldr r2, _08116EC4  @ =gRam
	ldr r1, _08116EC8  @ =0x00000E33
	add r0, r2, r1
	add r0, r0, r8
	ldrb r1, [r0]
	add r3, r1, #0
	cmp r3, #0
	bne _08116ED0
	ldr r4, _08116ECC  @ =0x00000E15
	add r0, r2, r4
	add r0, r0, r8
	strb r3, [r0]
	b _08116F5A
_08116EC4:
	.4byte gRam
_08116EC8:
	.4byte 0x00000E33
_08116ECC:
	.4byte 0x00000E15
_08116ED0:
	mov r0, #248
	and r0, r0, r1
	lsr r6, r0, #1
	mov r7, #0
	mov r9, r2
	ldr r0, _08116F6C  @ =0x00001724
	add r0, r0, r9
	mov r10, r0
_08116EE0:
	ldr r0, _08116F70  @ =gUnknown_0817EF00
	add r5, r6, r0
	ldrb r0, [r5]
	cmp r0, #255
	beq _08116F36
	ldr r0, _08116F74  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r7
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _08116F78  @ =0x00000968
	add r2, r2, r9
	ldr r1, _08116F7C  @ =gUnknown_0817EF24
	add r1, r6, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r4, #150
	lsl r4, r4, #4
	add r4, r4, r9
	ldr r3, _08116F80  @ =gUnknown_0817EF0C
	lsl r2, r6, #1
	add r2, r2, r3
	ldrh r2, [r2]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldrb r3, [r5]
	mov r4, r10
	ldrb r5, [r4]
	mov r4, #2
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
_08116F36:
	add r7, r7, #1
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r7, #3
	ble _08116EE0
	ldr r4, _08116F84  @ =gRam
	ldr r0, _08116F88  @ =0x00000E15
	add r4, r4, r0
	add r4, r4, r8
	ldrb r5, [r4]
	mov r0, #1
	strb r0, [r4]
	mov r0, r8
	mov r1, #0
	bl sub_080C09FC
	strb r5, [r4]
_08116F5A:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08116F6C:
	.4byte 0x00001724
_08116F70:
	.4byte gUnknown_0817EF00
_08116F74:
	.4byte gUnknown_03003E74
_08116F78:
	.4byte 0x00000968
_08116F7C:
	.4byte gUnknown_0817EF24
_08116F80:
	.4byte gUnknown_0817EF0C
_08116F84:
	.4byte gRam
_08116F88:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_08116E94

