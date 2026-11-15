	THUMB_FUNC_START sub_081288BC
sub_081288BC: @ 0x081288BC
	push {r4,r5,lr}
	ldr r2, _081288F0  @ =gRam
	ldr r0, _081288F4  @ =0x00000546
	add r1, r2, r0
	ldrb r0, [r1]
	mov r3, #192
	and r3, r3, r0
	ldr r4, _081288F8  @ =0x00000547
	add r0, r2, r4
	ldrb r0, [r0]
	orr r3, r3, r0
	mov r4, #0
	ldrh r1, [r1]
	mov r0, #193
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08128900
	ldr r5, _081288FC  @ =0x00001AE3
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #0
	bne _08128900
	bl sub_08129D90
	b _0812897A
_081288F0:
	.4byte gRam
_081288F4:
	.4byte 0x00000546
_081288F8:
	.4byte 0x00000547
_081288FC:
	.4byte 0x00001AE3
_08128900:
	ldr r1, _08128928  @ =0x00001B04
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08128934
	ldr r5, _0812892C  @ =0x00000547
	add r0, r2, r5
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08128934
	ldr r1, _08128930  @ =0x00001AE3
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08128934
	bl sub_08129DC0
	b _0812897A
_08128928:
	.4byte 0x00001B04
_0812892C:
	.4byte 0x00000547
_08128930:
	.4byte 0x00001AE3
_08128934:
	mov r0, #8
	and r0, r0, r3
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _0812895C
	ldr r4, _08128958  @ =0x00001AE2
	add r2, r2, r4
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _0812897E
	mov r0, #2
	strb r0, [r2]
	b _0812897E
_08128958:
	.4byte 0x00001AE2
_0812895C:
	mov r0, #4
	and r3, r3, r0
	cmp r3, #0
	beq _0812897A
	ldr r5, _081289F4  @ =0x00001AE2
	add r2, r2, r5
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _08128978
	strb r1, [r2]
_08128978:
	mov r4, #1
_0812897A:
	cmp r4, #0
	beq _081289E8
_0812897E:
	mov r0, #69
	mov r1, #0
	bl sub_0812A324
	ldr r4, _081289F8  @ =gRam
	ldr r3, _081289FC  @ =gUnknown_08180C78
	ldr r0, _081289F4  @ =0x00001AE2
	add r2, r4, r0
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	ldr r5, _08128A00  @ =0x00001AE8
	add r0, r4, r5
	mov r5, #0
	strb r1, [r0]
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	lsr r0, r0, #8
	ldr r2, _08128A04  @ =0x00001AE9
	add r1, r4, r2
	strb r0, [r1]
	bl sub_0812740C
	mov r1, #215
	lsl r1, r1, #5
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _08128A08  @ =0x00001AD2
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
	ldr r0, _08128A0C  @ =gUnknown_0201053F
_081289DE:
	strb r2, [r0]
	sub r0, r0, #1
	sub r1, r1, #1
	cmp r1, #0
	bge _081289DE
_081289E8:
	bl sub_08129578
	mov r0, #0
	pop {r4,r5}
	pop {r1}
	bx r1
_081289F4:
	.4byte 0x00001AE2
_081289F8:
	.4byte gRam
_081289FC:
	.4byte gUnknown_08180C78
_08128A00:
	.4byte 0x00001AE8
_08128A04:
	.4byte 0x00001AE9
_08128A08:
	.4byte 0x00001AD2
_08128A0C:
	.4byte gUnknown_0201053F
	THUMB_FUNC_END sub_081288BC

