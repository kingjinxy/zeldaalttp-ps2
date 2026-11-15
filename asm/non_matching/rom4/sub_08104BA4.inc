	THUMB_FUNC_START sub_08104BA4
sub_08104BA4: @ 0x08104BA4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r9, r7
	ldr r0, _08104C98  @ =gRam
	mov r8, r0
	ldr r0, _08104C9C  @ =0x00001052
	add r0, r0, r8
	add r0, r0, r7
	mov r10, r0
	ldrb r3, [r0]
	lsr r3, r3, #3
	mov r6, #6
	ldr r4, _08104CA0  @ =0x00001622
	add r4, r4, r8
	ldrb r0, [r4]
	ldr r5, _08104CA4  @ =0x00001623
	add r5, r5, r8
	ldrb r2, [r5]
	lsl r2, r2, #8
	ldr r1, _08104CA8  @ =gUnknown_0817BD9C
	and r3, r3, r6
	add r1, r3, r1
	orr r0, r0, r2
	ldrh r1, [r1]
	add r0, r0, r1
	strb r0, [r4]
	lsr r0, r0, #8
	strb r0, [r5]
	ldr r4, _08104CAC  @ =0x00001624
	add r4, r4, r8
	ldrb r0, [r4]
	ldr r5, _08104CB0  @ =0x00001625
	add r5, r5, r8
	ldrb r1, [r5]
	lsl r1, r1, #8
	ldr r2, _08104CB4  @ =gUnknown_0817BDA4
	add r3, r3, r2
	orr r0, r0, r1
	ldrh r3, [r3]
	add r0, r0, r3
	strb r0, [r4]
	lsr r0, r0, #8
	strb r0, [r5]
	add r0, r7, #0
	bl sub_080C6240
	add r0, r7, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _08104C1A
	b _08104ECE
_08104C1A:
	mov r1, r10
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08104CB8  @ =0x00000F92
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08104C30
	b _08104ECE
_08104C30:
	mov r0, sp
	add r1, r7, #0
	bl sub_080C4948
	add r0, r7, #0
	bl sub_080C4F98
	ldr r0, _08104CBC  @ =0x00001072
	add r0, r0, r8
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #14
	bne _08104C4E
	mov r0, #5
	strb r0, [r1]
_08104C4E:
	ldr r0, _08104CC0  @ =0x00000F52
	add r0, r0, r8
	add r6, r7, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _08104CE0
	ldr r0, _08104CC4  @ =0x000010A2
	add r0, r0, r8
	add r0, r7, r0
	ldr r1, _08104CC8  @ =0x000016C4
	add r1, r1, r8
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _08104CCC  @ =0x00001082
	add r0, r0, r8
	add r0, r7, r0
	ldr r1, _08104CD0  @ =0x000016C5
	add r1, r1, r8
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _08104CD4  @ =0x00001092
	add r0, r0, r8
	add r0, r7, r0
	mov r1, #182
	lsl r1, r1, #5
	add r1, r1, r8
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _08104CD8  @ =0x00001002
	add r0, r0, r8
	add r0, r7, r0
	ldr r1, _08104CDC  @ =0x000016C1
	add r1, r1, r8
	ldrb r1, [r1]
	strb r1, [r0]
	b _08104ECE
	.byte 0x00
	.byte 0x00
_08104C98:
	.4byte gRam
_08104C9C:
	.4byte 0x00001052
_08104CA0:
	.4byte 0x00001622
_08104CA4:
	.4byte 0x00001623
_08104CA8:
	.4byte gUnknown_0817BD9C
_08104CAC:
	.4byte 0x00001624
_08104CB0:
	.4byte 0x00001625
_08104CB4:
	.4byte gUnknown_0817BDA4
_08104CB8:
	.4byte 0x00000F92
_08104CBC:
	.4byte 0x00001072
_08104CC0:
	.4byte 0x00000F52
_08104CC4:
	.4byte 0x000010A2
_08104CC8:
	.4byte 0x000016C4
_08104CCC:
	.4byte 0x00001082
_08104CD0:
	.4byte 0x000016C5
_08104CD4:
	.4byte 0x00001092
_08104CD8:
	.4byte 0x00001002
_08104CDC:
	.4byte 0x000016C1
_08104CE0:
	cmp r0, #1
	beq _08104CE6
	b _08104DE4
_08104CE6:
	add r0, r7, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08104CF4
	b _08104ECE
_08104CF4:
	ldr r0, _08104DAC  @ =0x00000996
	add r0, r0, r8
	ldrb r1, [r0]
	add r0, r7, #0
	eor r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08104D64
	ldr r0, _08104DB0  @ =0x000010A2
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r0, _08104DB4  @ =0x00000968
	add r0, r0, r8
	strb r1, [r0]
	ldr r0, _08104DB8  @ =0x00001082
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r0, _08104DBC  @ =0x00000969
	add r0, r0, r8
	strb r1, [r0]
	ldr r0, _08104DC0  @ =0x00001092
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r0, _08104DC4  @ =0x0000096C
	add r0, r0, r8
	strb r1, [r0]
	ldr r0, _08104DC8  @ =0x00001002
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r0, _08104DCC  @ =0x0000096D
	add r0, r0, r8
	strb r1, [r0]
	add r0, r7, #0
	mov r1, #16
	bl sub_080C2DCC
	ldr r0, _08104DD0  @ =0x00000F12
	add r0, r0, r8
	add r0, r7, r0
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _08104DD4  @ =0x00000F22
	add r0, r0, r8
	add r0, r7, r0
	ldr r1, _08104DD8  @ =0x00000961
	add r1, r1, r8
	ldrb r1, [r1]
	strb r1, [r0]
_08104D64:
	add r0, r7, #0
	bl Sprite3_Move
	ldr r0, _08104DB0  @ =0x000010A2
	add r0, r0, r8
	add r0, r7, r0
	ldr r1, _08104DDC  @ =0x00000EE2
	add r1, r1, r8
	add r1, r7, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	add r0, r0, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bls _08104D88
	b _08104ECE
_08104D88:
	ldr r0, _08104DC0  @ =0x00001092
	add r0, r0, r8
	add r0, r7, r0
	ldr r1, _08104DE0  @ =0x00000ED2
	add r1, r1, r8
	add r1, r7, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	add r0, r0, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bls _08104DA6
	b _08104ECE
_08104DA6:
	ldrb r0, [r6]
	add r0, r0, #1
	b _08104ECC
_08104DAC:
	.4byte 0x00000996
_08104DB0:
	.4byte 0x000010A2
_08104DB4:
	.4byte 0x00000968
_08104DB8:
	.4byte 0x00001082
_08104DBC:
	.4byte 0x00000969
_08104DC0:
	.4byte 0x00001092
_08104DC4:
	.4byte 0x0000096C
_08104DC8:
	.4byte 0x00001002
_08104DCC:
	.4byte 0x0000096D
_08104DD0:
	.4byte 0x00000F12
_08104DD4:
	.4byte 0x00000F22
_08104DD8:
	.4byte 0x00000961
_08104DDC:
	.4byte 0x00000EE2
_08104DE0:
	.4byte 0x00000ED2
_08104DE4:
	add r0, r7, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	cmp r0, #0
	bne _08104ECE
	ldr r0, _08104EE0  @ =0x00000996
	add r0, r0, r8
	ldrb r1, [r0]
	add r0, r7, #0
	eor r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08104E64
	ldr r0, _08104EE4  @ =0x00000F62
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r0, _08104EE8  @ =0x00000968
	add r0, r0, r8
	strb r1, [r0]
	ldr r0, _08104EEC  @ =0x00000F72
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r0, _08104EF0  @ =0x00000969
	add r0, r0, r8
	strb r1, [r0]
	ldr r0, _08104EF4  @ =0x00000F82
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r0, _08104EF8  @ =0x0000096C
	add r0, r0, r8
	strb r1, [r0]
	ldr r0, _08104EFC  @ =0x00000FB2
	add r0, r0, r8
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r0, _08104F00  @ =0x0000096D
	add r0, r0, r8
	strb r1, [r0]
	add r0, r7, #0
	mov r1, #16
	bl sub_080C2DCC
	ldr r0, _08104F04  @ =0x00000F12
	add r0, r0, r8
	add r0, r7, r0
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _08104F08  @ =0x00000F22
	add r0, r0, r8
	add r0, r7, r0
	ldr r1, _08104F0C  @ =0x00000961
	add r1, r1, r8
	ldrb r1, [r1]
	strb r1, [r0]
_08104E64:
	mov r0, r9
	bl Sprite3_Move
	ldr r0, _08104EE4  @ =0x00000F62
	add r0, r0, r8
	add r0, r0, r9
	ldr r1, _08104F10  @ =0x00000EE2
	add r1, r1, r8
	mov r2, r9
	add r5, r2, r1
	ldrb r4, [r0]
	ldrb r0, [r5]
	sub r0, r4, r0
	add r0, r0, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bhi _08104ECE
	ldr r0, _08104EF4  @ =0x00000F82
	add r0, r0, r8
	add r3, r2, r0
	ldr r0, _08104F14  @ =0x00000ED2
	add r0, r0, r8
	add r2, r2, r0
	ldrb r0, [r3]
	ldrb r1, [r2]
	sub r0, r0, r1
	add r0, r0, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bhi _08104ECE
	strb r4, [r5]
	ldr r1, _08104F18  @ =0x00000F02
	add r1, r1, r8
	add r1, r1, r9
	ldr r0, _08104EEC  @ =0x00000F72
	add r0, r0, r8
	add r0, r0, r9
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r3]
	strb r0, [r2]
	ldr r1, _08104F1C  @ =0x00000EF2
	add r1, r1, r8
	add r1, r1, r9
	ldr r0, _08104EFC  @ =0x00000FB2
	add r0, r0, r8
	add r0, r0, r9
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, r10
_08104ECC:
	strb r0, [r6]
_08104ECE:
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
_08104EE0:
	.4byte 0x00000996
_08104EE4:
	.4byte 0x00000F62
_08104EE8:
	.4byte 0x00000968
_08104EEC:
	.4byte 0x00000F72
_08104EF0:
	.4byte 0x00000969
_08104EF4:
	.4byte 0x00000F82
_08104EF8:
	.4byte 0x0000096C
_08104EFC:
	.4byte 0x00000FB2
_08104F00:
	.4byte 0x0000096D
_08104F04:
	.4byte 0x00000F12
_08104F08:
	.4byte 0x00000F22
_08104F0C:
	.4byte 0x00000961
_08104F10:
	.4byte 0x00000EE2
_08104F14:
	.4byte 0x00000ED2
_08104F18:
	.4byte 0x00000F02
_08104F1C:
	.4byte 0x00000EF2
	THUMB_FUNC_END sub_08104BA4

