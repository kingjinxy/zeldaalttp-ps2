	THUMB_FUNC_START sub_08131710
sub_08131710: @ 0x08131710
	push {r4-r6,lr}
	ldr r4, _08131790  @ =gRam
	ldr r1, _08131794  @ =0x0000164C
	add r0, r4, r1
	ldr r0, [r0]
	ldr r1, _08131798  @ =0x00FFFF00
	and r0, r0, r1
	mov r1, #128
	lsl r1, r1, #3
	cmp r0, r1
	bne _0813172E
	mov r0, #48
	mov r1, #0
	bl sub_0812A324
_0813172E:
	ldr r3, _0813179C  @ =0x0000164E
	add r6, r4, r3
	ldrb r5, [r6]
	cmp r5, #0
	bne _081317A8
	mov r0, #49
	mov r1, #56
	mov r2, #0
	bl sub_08131524
	mov r0, #57
	mov r1, #64
	mov r2, #7
	bl sub_08131524
	mov r0, #73
	mov r1, #80
	mov r2, #14
	bl sub_08131524
	mov r0, #113
	mov r1, #120
	mov r2, #21
	bl sub_08131524
	mov r0, #121
	mov r1, #128
	mov r2, #28
	bl sub_08131524
	ldr r0, _081317A0  @ =0x0000164D
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldr r1, _081317A4  @ =0x0000099B
	add r2, r4, r1
	mov r1, #1
	strb r1, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bls _08131834
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	strb r5, [r3]
	b _08131834
	.byte 0x00
	.byte 0x00
_08131790:
	.4byte gRam
_08131794:
	.4byte 0x0000164C
_08131798:
	.4byte 0x00FFFF00
_0813179C:
	.4byte 0x0000164E
_081317A0:
	.4byte 0x0000164D
_081317A4:
	.4byte 0x0000099B
_081317A8:
	cmp r5, #1
	bne _08131820
	mov r0, #49
	mov r1, #56
	mov r2, #0
	bl sub_08131524
	mov r0, #57
	mov r1, #64
	mov r2, #7
	bl sub_08131524
	mov r0, #73
	mov r1, #80
	mov r2, #14
	bl sub_08131524
	mov r0, #113
	mov r1, #120
	mov r2, #21
	bl sub_08131524
	mov r0, #121
	mov r1, #128
	mov r2, #28
	bl sub_08131524
	ldr r3, _08131810  @ =0x0000164D
	add r2, r4, r3
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r3, _08131814  @ =0x0000099B
	add r1, r4, r3
	strb r5, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #36
	bls _08131834
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r1, _08131818  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	ldr r1, _0813181C  @ =gUnknown_0822BFFE
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	b _08131834
_08131810:
	.4byte 0x0000164D
_08131814:
	.4byte 0x0000099B
_08131818:
	.4byte 0x00000996
_0813181C:
	.4byte gUnknown_0822BFFE
_08131820:
	ldr r3, _0813183C  @ =0x0000164D
	add r1, r4, r3
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _08131834
	strb r0, [r6]
_08131834:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0813183C:
	.4byte 0x0000164D
	THUMB_FUNC_END sub_08131710

