	THUMB_FUNC_START sub_080FEFB8
sub_080FEFB8: @ 0x080FEFB8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FEFD2
	b _080FF166
_080FEFD2:
	add r0, r4, #0
	bl sub_080C4F98
	ldr r5, _080FF10C  @ =gRam
	ldr r1, _080FF110  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080FEFF6
	ldr r2, _080FF114  @ =0x00001122
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #128
	eor r1, r1, r2
	strb r1, [r0]
_080FEFF6:
	mov r1, #0
	ldr r3, _080FF118  @ =0x000009DA
	add r0, r5, r3
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FF004
	mov r1, #1
_080FF004:
	cmp r1, #0
	beq _080FF03E
	ldr r1, _080FF11C  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FF03E
	mov r1, #7
	and r1, r1, r4
	add r1, r1, #16
	add r0, r4, #0
	bl sub_080C2CB4
	ldr r2, _080FF120  @ =0x00000F22
	add r0, r5, r2
	add r0, r4, r0
	ldr r3, _080FF124  @ =0x00000961
	add r1, r5, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080FF128  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
_080FF03E:
	add r0, r4, #0
	bl Sprite3_Move
	ldr r6, _080FF10C  @ =gRam
	ldr r3, _080FF11C  @ =0x00000FC2
	add r0, r6, r3
	add r0, r4, r0
	ldrb r5, [r0]
	cmp r5, #0
	bne _080FF066
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FF066
	ldr r1, _080FF12C  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
_080FF066:
	ldr r2, _080FF10C  @ =gRam
	ldr r3, _080FF110  @ =0x00000996
	add r0, r2, r3
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080FF166
	mov r1, #0
	ldr r5, _080FF118  @ =0x000009DA
	add r0, r2, r5
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FF088
	mov r1, #1
_080FF088:
	cmp r1, #0
	bne _080FF166
	mov r1, #14
	ldr r0, _080FF130  @ =0x000011D2
	add r6, r2, r0
	mov r5, #2
	ldr r3, _080FF134  @ =0x000015F8
	add r7, r2, r3
_080FF098:
	lsl r0, r1, #24
	asr r3, r0, #24
	add r1, r3, r6
	ldrb r0, [r1]
	cmp r0, #0
	bne _080FF15C
	strb r5, [r1]
	strb r5, [r7]
	ldr r5, _080FF138  @ =0x0000122C
	add r1, r2, r5
	add r1, r3, r1
	ldr r5, _080FF13C  @ =0x00000EE2
	add r0, r2, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080FF140  @ =0x00001268
	add r1, r2, r0
	add r1, r3, r1
	add r5, r5, #32
	add r0, r2, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080FF144  @ =0x0000120E
	add r1, r2, r0
	add r1, r3, r1
	sub r5, r5, #48
	add r0, r2, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080FF148  @ =0x0000124A
	add r1, r2, r0
	add r1, r3, r1
	add r5, r5, #32
	add r0, r2, r5
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080FF14C  @ =0x000012FE
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #16
	strb r1, [r0]
	ldr r5, _080FF150  @ =0x0000131C
	add r0, r2, r5
	add r0, r3, r0
	strb r4, [r0]
	ldr r0, _080FF154  @ =0x00001358
	add r1, r2, r0
	add r1, r3, r1
	ldr r3, _080FF158  @ =0x000010F2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	b _080FF166
_080FF10C:
	.4byte gRam
_080FF110:
	.4byte 0x00000996
_080FF114:
	.4byte 0x00001122
_080FF118:
	.4byte 0x000009DA
_080FF11C:
	.4byte 0x00000FC2
_080FF120:
	.4byte 0x00000F22
_080FF124:
	.4byte 0x00000961
_080FF128:
	.4byte 0x00000F12
_080FF12C:
	.4byte 0x00000FA2
_080FF130:
	.4byte 0x000011D2
_080FF134:
	.4byte 0x000015F8
_080FF138:
	.4byte 0x0000122C
_080FF13C:
	.4byte 0x00000EE2
_080FF140:
	.4byte 0x00001268
_080FF144:
	.4byte 0x0000120E
_080FF148:
	.4byte 0x0000124A
_080FF14C:
	.4byte 0x000012FE
_080FF150:
	.4byte 0x0000131C
_080FF154:
	.4byte 0x00001358
_080FF158:
	.4byte 0x000010F2
_080FF15C:
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080FF098
_080FF166:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080FEFB8

