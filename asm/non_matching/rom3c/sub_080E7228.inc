	THUMB_FUNC_START sub_080E7228
sub_080E7228: @ 0x080E7228
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080E7254  @ =gRam
	ldr r2, _080E7258  @ =0x00000FE2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r3, [r0]
	add r5, r1, #0
	cmp r3, #0
	bne _080E7264
	ldr r1, _080E725C  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	beq _080E727C
	ldr r2, _080E7260  @ =0x00000F62
	add r0, r5, r2
	b _080E7270
	.byte 0x00
	.byte 0x00
_080E7254:
	.4byte gRam
_080E7258:
	.4byte 0x00000FE2
_080E725C:
	.4byte 0x00000F52
_080E7260:
	.4byte 0x00000F62
_080E7264:
	mov r0, #4
	and r0, r0, r3
	cmp r0, #0
	beq _080E727C
	ldr r1, _080E7278  @ =0x00000F62
	add r0, r5, r1
_080E7270:
	add r0, r4, r0
	ldrb r3, [r0]
	b _080E727E
	.byte 0x00
	.byte 0x00
_080E7278:
	.4byte 0x00000F62
_080E727C:
	mov r3, #8
_080E727E:
	ldr r2, _080E7340  @ =0x00000F92
	add r1, r5, r2
	add r1, r4, r1
	ldr r0, _080E7344  @ =gUnknown_081777E4
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E7348  @ =0x00001122
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	ldr r0, _080E734C  @ =gUnknown_081777ED
	add r0, r3, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E7338
	ldr r1, _080E7350  @ =0x00001072
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E72D6
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E72D6
	add r0, r4, #0
	mov r1, #30
	bl sub_080CF0AC
_080E72D6:
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E72EA
	bl sub_080AF16C
	bl sub_0809945C
_080E72EA:
	ldr r5, _080E7354  @ =gRam
	ldr r2, _080E7350  @ =0x00001072
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #14
	bne _080E7316
	ldr r1, _080E7358  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	sub r2, r2, #160
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r1, _080E735C  @ =0x00000FE2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
_080E7316:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E7338
	ldr r1, _080E7360  @ =gUnknown_081777F8
	ldr r2, _080E7358  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080E7338:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080E7340:
	.4byte 0x00000F92
_080E7344:
	.4byte gUnknown_081777E4
_080E7348:
	.4byte 0x00001122
_080E734C:
	.4byte gUnknown_081777ED
_080E7350:
	.4byte 0x00001072
_080E7354:
	.4byte gRam
_080E7358:
	.4byte 0x00000F52
_080E735C:
	.4byte 0x00000FE2
_080E7360:
	.4byte gUnknown_081777F8
	THUMB_FUNC_END sub_080E7228

