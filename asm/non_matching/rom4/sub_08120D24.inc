	THUMB_FUNC_START sub_08120D24
sub_08120D24: @ 0x08120D24
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _08120E50  @ =gRam
	ldr r0, _08120E54  @ =0x00001735
	add r5, r4, r0
	strb r6, [r5]
	add r0, r6, #0
	mov r1, #16
	bl sub_080C18C8
	ldr r1, _08120E58  @ =gUnknown_03003E74
	mov r10, r1
_08120D48:
	ldr r2, _08120E5C  @ =gUnknown_02006890
	add r0, r6, r2
	ldrb r1, [r0]
	cmp r1, #13
	beq _08120E2E
	lsl r0, r1, #1
	add r0, r1, r0
	add r0, r0, #2
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #0
	ldr r4, _08120E60  @ =gUnknown_03002BA0
	strb r0, [r4]
	ldr r5, _08120E50  @ =gRam
	ldr r0, _08120E54  @ =0x00001735
	add r0, r0, r5
	mov r9, r0
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r5
	mov r8, r1
	ldr r2, _08120E64  @ =0x00000964
	add r7, r5, r2
_08120D76:
	ldr r0, _08120E68  @ =gUnknown_081801C2
	add r3, r6, r0
	ldrb r0, [r3]
	cmp r0, #255
	beq _08120E00
	mov r4, r9
	ldrb r0, [r4]
	ldr r1, _08120E6C  @ =gUnknown_020068A4
	add r0, r0, r1
	ldrb r0, [r0]
	mov r2, r8
	strb r0, [r2]
	ldrb r0, [r4]
	ldr r4, _08120E70  @ =gUnknown_020068E4
	add r0, r0, r4
	ldrb r1, [r0]
	ldr r2, _08120E74  @ =0x00000961
	add r0, r5, r2
	strb r1, [r0]
	mov r4, r9
	ldrb r0, [r4]
	ldr r1, _08120E78  @ =gUnknown_02006924
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r7]
	ldrb r0, [r4]
	ldr r2, _08120E7C  @ =gUnknown_02006964
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r4, _08120E80  @ =0x00000965
	add r0, r5, r4
	strb r1, [r0]
	ldr r0, _08120E84  @ =gUnknown_08180210
	lsl r2, r6, #1
	add r0, r2, r0
	ldrh r0, [r0]
	mov r1, r8
	ldrh r1, [r1]
	add r0, r0, r1
	sub r4, r4, #13
	add r1, r5, r4
	ldrh r1, [r1]
	sub r0, r0, r1
	mov r1, r8
	strh r0, [r1]
	ldr r0, _08120E88  @ =gUnknown_0818025E
	add r2, r2, r0
	ldrh r0, [r2]
	ldrh r2, [r7]
	add r0, r0, r2
	ldr r4, _08120E8C  @ =gUnknown_03002B82
	ldrh r1, [r4]
	sub r0, r0, r1
	strh r0, [r7]
	mov r1, r10
	ldrh r0, [r1]
	ldrh r1, [r7]
	mov r4, r8
	ldrh r2, [r4]
	ldrb r3, [r3]
	ldr r4, _08120E90  @ =gUnknown_081801E9
	add r4, r6, r4
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
_08120E00:
	mov r1, r10
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C1918
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r2, r10
	strh r0, [r2]
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _08120E60  @ =gUnknown_03002BA0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #3
	bne _08120D76
_08120E2E:
	ldr r1, _08120E94  @ =gUnknown_03003965
	ldrb r0, [r1]
	sub r0, r0, #16
	strb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08120D48
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
_08120E50:
	.4byte gRam
_08120E54:
	.4byte 0x00001735
_08120E58:
	.4byte gUnknown_03003E74
_08120E5C:
	.4byte gUnknown_02006890
_08120E60:
	.4byte gUnknown_03002BA0
_08120E64:
	.4byte 0x00000964
_08120E68:
	.4byte gUnknown_081801C2
_08120E6C:
	.4byte gUnknown_020068A4
_08120E70:
	.4byte gUnknown_020068E4
_08120E74:
	.4byte 0x00000961
_08120E78:
	.4byte gUnknown_02006924
_08120E7C:
	.4byte gUnknown_02006964
_08120E80:
	.4byte 0x00000965
_08120E84:
	.4byte gUnknown_08180210
_08120E88:
	.4byte gUnknown_0818025E
_08120E8C:
	.4byte gUnknown_03002B82
_08120E90:
	.4byte gUnknown_081801E9
_08120E94:
	.4byte gUnknown_03003965
	THUMB_FUNC_END sub_08120D24

