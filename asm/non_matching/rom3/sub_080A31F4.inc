	THUMB_FUNC_START sub_080A31F4
sub_080A31F4: @ 0x080A31F4
	push {r4,r5,lr}
	ldr r2, _080A3214  @ =gRam
	ldr r1, _080A3218  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A3210
	ldr r1, _080A321C  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3220
_080A3210:
	mov r0, #0
	b _080A3224
_080A3214:
	.4byte gRam
_080A3218:
	.4byte 0x000016E8
_080A321C:
	.4byte 0x000016F8
_080A3220:
	bl sub_080A1ADC
_080A3224:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A330E
	ldr r1, _080A3288  @ =gRam
	ldr r2, _080A328C  @ =0x000016E8
	add r3, r1, r2
	ldrb r2, [r3]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _080A3290  @ =0x0000172C
	add r0, r1, r2
	ldrb r0, [r0]
	add r5, r1, #0
	cmp r0, #0
	bne _080A3280
	ldr r1, _080A3294  @ =0x00001649
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A3280
	ldr r2, _080A3298  @ =0x00000AA8
	add r0, r5, r2
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080A3280
	ldr r0, _080A329C  @ =gSword
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _080A3280
	ldr r1, _080A32A0  @ =0x0000166A
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A32A8
	ldr r2, _080A32A4  @ =0x00001663
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #13
	bne _080A32A8
_080A3280:
	mov r0, #64
	bl sub_0809E43C
	b _080A330E
_080A3288:
	.4byte gRam
_080A328C:
	.4byte 0x000016E8
_080A3290:
	.4byte 0x0000172C
_080A3294:
	.4byte 0x00001649
_080A3298:
	.4byte 0x00000AA8
_080A329C:
	.4byte gSword
_080A32A0:
	.4byte 0x0000166A
_080A32A4:
	.4byte 0x00001663
_080A32A8:
	ldr r1, _080A3314  @ =0x00000E15
	add r0, r5, r1
	ldr r2, _080A3318  @ =0x00000E16
	add r1, r5, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r4, r2, #0
	orr r4, r4, r0
	ldr r1, _080A331C  @ =0x00000E17
	add r0, r5, r1
	ldrb r0, [r0]
	orr r4, r4, r0
	cmp r4, #0
	bne _080A330E
	mov r0, #1
	bl sub_080A3B64
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A330E
	ldr r2, _080A3320  @ =0x00001644
	add r1, r5, r2
	mov r0, #240
	strb r0, [r1]
	ldr r0, _080A3324  @ =0x00001718
	add r1, r5, r0
	mov r0, #8
	strb r0, [r1]
	ldr r1, _080A3328  @ =0x00001705
	add r2, r5, r1
	ldrb r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _080A332C  @ =0x000016EB
	add r1, r5, r2
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080A3330  @ =0x000017A6
	add r0, r5, r1
	strh r4, [r0]
	add r2, r2, #197
	add r0, r5, r2
	strh r4, [r0]
	mov r0, #107
	bl sub_0809E49C
	mov r0, #8
	mov r1, #1
	bl sub_080BEA28
_080A330E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080A3314:
	.4byte 0x00000E15
_080A3318:
	.4byte 0x00000E16
_080A331C:
	.4byte 0x00000E17
_080A3320:
	.4byte 0x00001644
_080A3324:
	.4byte 0x00001718
_080A3328:
	.4byte 0x00001705
_080A332C:
	.4byte 0x000016EB
_080A3330:
	.4byte 0x000017A6
	THUMB_FUNC_END sub_080A31F4

