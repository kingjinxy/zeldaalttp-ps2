	THUMB_FUNC_START sub_081171E0
sub_081171E0: @ 0x081171E0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r0, #0
	str r0, [sp, #12]
	mov r0, r9
	bl sub_080C177C
	ldr r4, _081172DC  @ =gRam
	ldr r1, _081172E0  @ =0x00000E5B
	add r0, r4, r1
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, r9
	bl sub_080C18C8
	ldr r2, _081172E4  @ =0x00000E29
	add r0, r4, r2
	add r0, r0, r9
	ldrb r0, [r0]
	lsl r0, r0, #27
	lsr r5, r0, #24
	mov r3, #0
	mov r8, r3
	add r7, r4, #0
	ldr r6, _081172E8  @ =gUnknown_03003E74
_08117220:
	mov r4, #150
	lsl r4, r4, #4
	add r4, r4, r7
	mov r10, r4
	ldr r1, _081172EC  @ =gUnknown_0817EF80
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r2, [r4]
	add r0, r0, r2
	ldr r3, _081172F0  @ =gUnknown_03002BA0
	strh r0, [r3]
	ldr r4, _081172F4  @ =0x00000964
	add r1, r7, r4
	add r0, r5, #1
	ldr r2, _081172EC  @ =gUnknown_0817EF80
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r3, _081172F8  @ =0x00000974
	add r1, r7, r3
	strh r0, [r1]
	ldrh r0, [r6]
	ldrh r1, [r1]
	ldr r4, _081172F0  @ =gUnknown_03002BA0
	ldrh r2, [r4]
	ldr r4, _081172FC  @ =gUnknown_0817EF70
	lsr r3, r5, #1
	lsl r3, r3, #1
	add r3, r3, r4
	ldrh r3, [r3]
	ldr r4, _08117300  @ =0x0000CFFF
	mov r12, r4
	mov r4, r12
	and r3, r3, r4
	ldr r4, _08117304  @ =gUnknown_03003953
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	add r4, sp, #8
	str r4, [sp, #4]
	bl sub_080C63A4
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C1918
	lsl r0, r0, #24
	lsr r0, r0, #24
	strh r0, [r6]
	mov r0, #0
	mov r1, r8
	cmp r1, #1
	bgt _081172A6
	add r0, sp, #8
	ldrb r0, [r0]
	neg r0, r0
	lsr r0, r0, #31
_081172A6:
	ldr r2, [sp, #12]
	orr r2, r2, r0
	str r2, [sp, #12]
	mov r3, #1
	add r8, r8, r3
	add r0, r5, #2
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r4, r8
	cmp r4, #3
	ble _08117220
	cmp r2, #0
	beq _081172CA
	ldr r0, _08117308  @ =0x000004B5
	add r0, r0, r10
	add r0, r0, r9
	mov r1, #0
	strb r1, [r0]
_081172CA:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081172DC:
	.4byte gRam
_081172E0:
	.4byte 0x00000E5B
_081172E4:
	.4byte 0x00000E29
_081172E8:
	.4byte gUnknown_03003E74
_081172EC:
	.4byte gUnknown_0817EF80
_081172F0:
	.4byte gUnknown_03002BA0
_081172F4:
	.4byte 0x00000964
_081172F8:
	.4byte 0x00000974
_081172FC:
	.4byte gUnknown_0817EF70
_08117300:
	.4byte 0x0000CFFF
_08117304:
	.4byte gUnknown_03003953
_08117308:
	.4byte 0x000004B5
	THUMB_FUNC_END sub_081171E0

