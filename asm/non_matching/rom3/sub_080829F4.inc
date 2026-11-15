	THUMB_FUNC_START sub_080829F4
sub_080829F4: @ 0x080829F4
	push {r4,r5,lr}
	ldr r4, _08082A7C  @ =gRam
	ldr r1, _08082A80  @ =0x00000B58
	add r0, r4, r1
	ldrh r1, [r0]
	cmp r1, #0
	beq _08082ACE
	lsl r0, r1, #18
	lsr r2, r0, #19
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	neg r0, r0
	lsr r3, r0, #31
	ldr r5, _08082A84  @ =0x00000AA8
	add r0, r4, r5
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _08082A94
	mov r4, #1
	mov r1, #0
_08082A28:
	ldr r5, _08082A88  @ =gUnknown_0200CBA0
	add r0, r2, r5
	strb r4, [r0]
	add r5, r5, #1
	add r0, r2, r5
	strb r4, [r0]
	ldr r5, _08082A8C  @ =gUnknown_0200CE20
	add r0, r2, r5
	strb r4, [r0]
	add r5, r5, #1
	add r0, r2, r5
	strb r4, [r0]
	ldr r5, _08082A90  @ =gUnknown_0200CC20
	add r0, r2, r5
	strb r1, [r0]
	add r5, r5, #1
	add r0, r2, r5
	strb r1, [r0]
	add r5, r5, #127
	add r0, r2, r5
	strb r1, [r0]
	add r5, r5, #1
	add r0, r2, r5
	strb r1, [r0]
	add r5, r5, #127
	add r0, r2, r5
	strb r1, [r0]
	add r5, r5, #1
	add r0, r2, r5
	strb r1, [r0]
	add r5, r5, #127
	add r0, r2, r5
	strb r1, [r0]
	add r5, r5, #1
	add r0, r2, r5
	strb r1, [r0]
	add r2, r2, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _08082A28
	b _08082ACE
	.byte 0x00
	.byte 0x00
_08082A7C:
	.4byte gRam
_08082A80:
	.4byte 0x00000B58
_08082A84:
	.4byte 0x00000AA8
_08082A88:
	.4byte gUnknown_0200CBA0
_08082A8C:
	.4byte gUnknown_0200CE20
_08082A90:
	.4byte gUnknown_0200CC20
_08082A94:
	mov r1, #35
_08082A96:
	ldr r4, _08082AD4  @ =gUnknown_0200CC20
	add r0, r2, r4
	strb r1, [r0]
	ldr r5, _08082AD8  @ =gUnknown_0200CC21
	add r0, r2, r5
	strb r1, [r0]
	add r4, r4, #128
	add r0, r2, r4
	strb r1, [r0]
	add r5, r5, #128
	add r0, r2, r5
	strb r1, [r0]
	add r4, r4, #128
	add r0, r2, r4
	strb r1, [r0]
	add r5, r5, #128
	add r0, r2, r5
	strb r1, [r0]
	add r4, r4, #128
	add r0, r2, r4
	strb r1, [r0]
	add r5, r5, #128
	add r0, r2, r5
	strb r1, [r0]
	add r2, r2, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _08082A96
_08082ACE:
	pop {r4,r5}
	pop {r0}
	bx r0
_08082AD4:
	.4byte gUnknown_0200CC20
_08082AD8:
	.4byte gUnknown_0200CC21
	THUMB_FUNC_END sub_080829F4

