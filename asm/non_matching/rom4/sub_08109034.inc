	THUMB_FUNC_START sub_08109034
sub_08109034: @ 0x08109034
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r7, _081090A8  @ =gRam
	ldr r0, _081090AC  @ =0x00000A2A
	add r3, r7, r0
	mov r1, #0
	mov r8, r1
	mov r0, #0
	strh r0, [r3]
	ldr r1, _081090B0  @ =0x00000FC2
	add r0, r7, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _081090C8
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r3, _081090B4  @ =0x00001142
	add r0, r7, r3
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08109090
	ldr r1, _081090B8  @ =0x00001152
	add r0, r7, r1
	add r0, r4, r0
	mov r3, r8
	strb r3, [r0]
	strb r3, [r2]
	mov r0, #96
	strb r0, [r5]
	ldr r0, _081090BC  @ =0x00000A3E
	add r1, r7, r0
	mov r0, #5
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #41
	bl sub_080CF0AC
_08109090:
	ldr r3, _081090C0  @ =0x00000F92
	add r1, r7, r3
	add r1, r4, r1
	ldr r2, _081090C4  @ =gUnknown_0817C2A0
	add r3, r3, #32
	add r0, r7, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _08109138
_081090A8:
	.4byte gRam
_081090AC:
	.4byte 0x00000A2A
_081090B0:
	.4byte 0x00000FC2
_081090B4:
	.4byte 0x00001142
_081090B8:
	.4byte 0x00001152
_081090BC:
	.4byte 0x00000A3E
_081090C0:
	.4byte 0x00000F92
_081090C4:
	.4byte gUnknown_0817C2A0
_081090C8:
	ldrb r0, [r5]
	cmp r0, #1
	beq _081090EC
	ldr r1, _081090E4  @ =gUnknown_0817C2A2
	mov r2, #1
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r1, _081090E8  @ =0x00001770
	add r0, r7, r1
	strb r2, [r0]
	b _08109138
_081090E4:
	.4byte gUnknown_0817C2A2
_081090E8:
	.4byte 0x00001770
_081090EC:
	ldr r3, _08109144  @ =0x00000A3E
	add r1, r7, r3
	mov r0, #255
	strb r0, [r1]
	add r0, r6, #0
	mov r1, #13
	bl sub_081098B0
	ldr r1, _08109148  @ =0x00001770
	add r0, r7, r1
	mov r3, r8
	strb r3, [r0]
	add r0, r6, #0
	bl sub_0810915C
	ldr r1, _0810914C  @ =0x00001092
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #3
	bls _08109138
	add r0, r6, #0
	mov r1, #10
	bl sub_081098B0
	ldr r3, _08109150  @ =0x00001022
	add r0, r7, r3
	add r0, r6, r0
	mov r1, #96
	strb r1, [r0]
	ldr r1, _08109154  @ =0x00000FE2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #224
	strb r1, [r0]
	ldr r0, _08109158  @ =0x00000173
	bl sub_080C95C0
_08109138:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08109144:
	.4byte 0x00000A3E
_08109148:
	.4byte 0x00001770
_0810914C:
	.4byte 0x00001092
_08109150:
	.4byte 0x00001022
_08109154:
	.4byte 0x00000FE2
_08109158:
	.4byte 0x00000173
	THUMB_FUNC_END sub_08109034

