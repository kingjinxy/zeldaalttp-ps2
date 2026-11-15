	THUMB_FUNC_START sub_0810E0C4
sub_0810E0C4: @ 0x0810E0C4
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0810E158
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810E150
	add r0, r4, #0
	bl sub_080C90F4
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r3, _0810E11C  @ =gRam
	ldr r2, _0810E120  @ =0x00001082
	add r1, r3, r2
	add r1, r4, r1
	mov r2, #3
	eor r0, r0, r2
	strb r0, [r1]
	ldr r1, _0810E124  @ =0x000009DA
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0810E13E
	ldr r2, _0810E128  @ =0x00000AA6
	add r0, r3, r2
	ldrh r1, [r0]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0810E130
	ldr r1, _0810E12C  @ =0x00000133
	b _0810E134
	.byte 0x00
	.byte 0x00
_0810E11C:
	.4byte gRam
_0810E120:
	.4byte 0x00001082
_0810E124:
	.4byte 0x000009DA
_0810E128:
	.4byte 0x00000AA6
_0810E12C:
	.4byte 0x00000133
_0810E130:
	mov r1, #153
	lsl r1, r1, #1
_0810E134:
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	b _0810E14A
_0810E13E:
	mov r1, #154
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
_0810E14A:
	add r0, r4, #0
	bl sub_080C5080
_0810E150:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810E0C4

