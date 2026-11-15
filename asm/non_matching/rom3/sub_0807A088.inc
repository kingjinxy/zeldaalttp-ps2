	THUMB_FUNC_START sub_0807A088
sub_0807A088: @ 0x0807A088
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r4, _0807A148  @ =0x0000FFFF
	ldr r2, _0807A14C  @ =gRam
	mov r1, #178
	lsl r1, r1, #4
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r0, _0807A150  @ =0x0000195C
	add r3, r2, r0
_0807A09C:
	add r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
	cmp r4, r1
	beq _0807A0BE
	lsl r0, r4, #1
	add r0, r0, r3
	ldrh r0, [r0]
	cmp r0, #5
	bne _0807A09C
	ldr r0, _0807A14C  @ =gRam
	ldr r1, _0807A154  @ =0x00000B0E
	add r0, r0, r1
	ldrh r4, [r0]
	ldr r0, _0807A148  @ =0x0000FFFF
	cmp r4, r0
	bne _0807A0E4
_0807A0BE:
	mov r4, #0
	ldr r3, _0807A158  @ =0x00000BC4
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _0807A0E4
	mov r1, #188
	lsl r1, r1, #4
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0807A0E4
	mov r0, sp
	bl sub_08079F90
	lsl r0, r0, #24
	cmp r0, #0
	bne _0807A0E4
	mov r4, #1
_0807A0E4:
	ldr r5, _0807A14C  @ =gRam
	mov r2, #177
	lsl r2, r2, #4
	add r1, r5, r2
	ldrh r3, [r1]
	cmp r4, r3
	beq _0807A13E
	mov r0, #0
	strh r4, [r1]
	add r2, r2, #240
	add r1, r5, r2
	strh r0, [r1]
	ldr r3, _0807A15C  @ =0x00000C02
	add r1, r5, r3
	strh r0, [r1]
	cmp r4, #0
	bne _0807A136
	ldr r1, _0807A160  @ =0x000016C4
	add r0, r5, r1
	ldr r2, _0807A164  @ =0x00000952
	add r1, r5, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _0807A168  @ =0x00000504
	add r1, r5, r3
	strh r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r5, r2
	ldr r3, _0807A16C  @ =0x00000958
	add r2, r5, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _0807A170  @ =0x00000506
	add r2, r5, r3
	strh r0, [r2]
	mov r0, #59
	bl sub_0812A324
_0807A136:
	ldr r0, _0807A174  @ =0x000009AD
	add r1, r5, r0
	mov r0, #5
	strb r0, [r1]
_0807A13E:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807A148:
	.4byte 0x0000FFFF
_0807A14C:
	.4byte gRam
_0807A150:
	.4byte 0x0000195C
_0807A154:
	.4byte 0x00000B0E
_0807A158:
	.4byte 0x00000BC4
_0807A15C:
	.4byte 0x00000C02
_0807A160:
	.4byte 0x000016C4
_0807A164:
	.4byte 0x00000952
_0807A168:
	.4byte 0x00000504
_0807A16C:
	.4byte 0x00000958
_0807A170:
	.4byte 0x00000506
_0807A174:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0807A088

