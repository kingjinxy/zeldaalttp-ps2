	THUMB_FUNC_START sub_08108358
sub_08108358: @ 0x08108358
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r5, _08108470  @ =gRam
	ldr r1, _08108474  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _08108478  @ =0x00000F22
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	bl sub_080CA32C
	ldr r3, _0810847C  @ =0x00000F92
	add r1, r5, r3
	add r2, r4, r1
	ldr r1, _08108480  @ =gUnknown_0817C1D9
	lsl r0, r0, #24
	lsr r0, r0, #25
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _08108484  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _081083AC
	ldr r0, _08108488  @ =gUnknown_0817C1E1
	ldrb r1, [r2]
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
_081083AC:
	add r0, r4, #0
	bl sub_08108654
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _081083C0
	b _08108506
_081083C0:
	ldr r2, _0810848C  @ =0x00000F52
	add r0, r5, r2
	add r6, r4, r0
	ldrb r1, [r6]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _081084B8
	ldr r3, _08108490  @ =0x00000996
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _081083E6
	add r0, r4, #0
	mov r1, #101
	bl sub_080CF140
_081083E6:
	ldr r1, _08108494  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r2, #127
	and r2, r2, r1
	ldr r3, _08108498  @ =gUnknown_0200EC18
	add r1, r2, r3
	ldr r3, _0810849C  @ =0x00000EE2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _081084A0  @ =gUnknown_0200ED18
	add r1, r2, r0
	sub r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _081084A4  @ =gUnknown_0200EC98
	add r1, r2, r0
	add r3, r3, #48
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _081084A8  @ =gUnknown_0200ED98
	add r2, r2, r0
	ldr r1, _081084AC  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _081084B0  @ =0x00001072
	add r0, r5, r2
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #14
	bne _08108448
	mov r0, #8
	strb r0, [r1]
	ldrb r0, [r6]
	cmp r0, #0
	bne _08108448
	mov r0, #2
	strb r0, [r6]
_08108448:
	add r0, r7, #0
	bl Sprite3_Move
	add r0, r7, #0
	bl sub_080C5044
	ldr r1, _081084B4  @ =gUnknown_0817C1EC
	ldr r0, _08108470  @ =gRam
	ldr r3, _0810848C  @ =0x00000F52
	add r0, r0, r3
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r7, #0
	bl _call_via_r1
	b _08108506
	.byte 0x00
	.byte 0x00
_08108470:
	.4byte gRam
_08108474:
	.4byte 0x00000F12
_08108478:
	.4byte 0x00000F22
_0810847C:
	.4byte 0x00000F92
_08108480:
	.4byte gUnknown_0817C1D9
_08108484:
	.4byte 0x00000FD2
_08108488:
	.4byte gUnknown_0817C1E1
_0810848C:
	.4byte 0x00000F52
_08108490:
	.4byte 0x00000996
_08108494:
	.4byte 0x00001052
_08108498:
	.4byte gUnknown_0200EC18
_0810849C:
	.4byte 0x00000EE2
_081084A0:
	.4byte gUnknown_0200ED18
_081084A4:
	.4byte gUnknown_0200EC98
_081084A8:
	.4byte gUnknown_0200ED98
_081084AC:
	.4byte 0x00000EF2
_081084B0:
	.4byte 0x00001072
_081084B4:
	.4byte gUnknown_0817C1EC
_081084B8:
	ldr r1, _081084F0  @ =0x000010C2
	add r0, r5, r1
	add r3, r4, r0
	ldr r2, _081084F4  @ =0x00000FC2
	add r0, r5, r2
	add r2, r4, r0
	ldrb r0, [r2]
	mov r1, #224
	orr r0, r0, r1
	strb r0, [r3]
	ldrb r0, [r2]
	cmp r0, #0
	bne _08108506
	mov r0, #12
	strb r0, [r2]
	ldr r1, _081084F8  @ =0x00001092
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _081084FC
	sub r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080D9844
	b _08108506
	.byte 0x00
	.byte 0x00
_081084F0:
	.4byte 0x000010C2
_081084F4:
	.4byte 0x00000FC2
_081084F8:
	.4byte 0x00001092
_081084FC:
	mov r0, #255
	strb r0, [r3]
	add r0, r7, #0
	bl sub_080CA5D8
_08108506:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08108358

