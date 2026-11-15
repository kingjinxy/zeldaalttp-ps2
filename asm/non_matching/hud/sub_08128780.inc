	THUMB_FUNC_START sub_08128780
sub_08128780: @ 0x08128780
	push {r4,r5,lr}
	mov r4, #0
	ldr r2, _081287A8  @ =gRam
	ldr r1, _081287AC  @ =0x00000546
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #193
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _081287B4
	ldr r5, _081287B0  @ =0x00001AE3
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #0
	bne _081287B4
	bl sub_08129D90
	b _08128828
	.byte 0x00
	.byte 0x00
_081287A8:
	.4byte gRam
_081287AC:
	.4byte 0x00000546
_081287B0:
	.4byte 0x00001AE3
_081287B4:
	ldr r1, _081287DC  @ =0x00001B04
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _081287E8
	ldr r5, _081287E0  @ =0x00000547
	add r0, r2, r5
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _081287E8
	ldr r1, _081287E4  @ =0x00001AE3
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _081287E8
	bl sub_08129DC0
	b _08128828
_081287DC:
	.4byte 0x00001B04
_081287E0:
	.4byte 0x00000547
_081287E4:
	.4byte 0x00001AE3
_081287E8:
	add r3, r2, #0
	ldr r5, _08128808  @ =0x00000547
	add r0, r3, r5
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _08128810
	ldr r0, _0812880C  @ =0x00001AE2
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08128828
	mov r0, #0
	strb r0, [r1]
	b _0812882C
_08128808:
	.4byte 0x00000547
_0812880C:
	.4byte 0x00001AE2
_08128810:
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _08128828
	ldr r1, _081288A4  @ =0x00001AE2
	add r2, r2, r1
	ldrb r0, [r2]
	cmp r0, #1
	beq _08128828
	mov r0, #1
	strb r0, [r2]
	mov r4, #1
_08128828:
	cmp r4, #0
	beq _08128896
_0812882C:
	mov r0, #69
	mov r1, #0
	bl sub_0812A324
	ldr r4, _081288A8  @ =gRam
	ldr r3, _081288AC  @ =gUnknown_08180C74
	ldr r5, _081288A4  @ =0x00001AE2
	add r2, r4, r5
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	add r5, r5, #6
	add r0, r4, r5
	mov r5, #0
	strb r1, [r0]
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	lsr r0, r0, #8
	ldr r2, _081288B0  @ =0x00001AE9
	add r1, r4, r2
	strb r0, [r1]
	bl sub_0812740C
	mov r1, #215
	lsl r1, r1, #5
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _081288B4  @ =0x00001AD2
	add r0, r4, r2
	strh r5, [r0]
	add r1, r1, #18
	add r0, r4, r1
	strh r5, [r0]
	add r2, r2, #30
	add r0, r4, r2
	strh r5, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strh r5, [r0]
	add r2, r2, #6
	add r4, r4, r2
	strh r5, [r4]
	mov r2, #0
	mov r1, #207
	ldr r0, _081288B8  @ =gUnknown_0201053F
_0812888C:
	strb r2, [r0]
	sub r0, r0, #1
	sub r1, r1, #1
	cmp r1, #0
	bge _0812888C
_08128896:
	bl sub_08129578
	mov r0, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_081288A4:
	.4byte 0x00001AE2
_081288A8:
	.4byte gRam
_081288AC:
	.4byte gUnknown_08180C74
_081288B0:
	.4byte 0x00001AE9
_081288B4:
	.4byte 0x00001AD2
_081288B8:
	.4byte gUnknown_0201053F
	THUMB_FUNC_END sub_08128780

