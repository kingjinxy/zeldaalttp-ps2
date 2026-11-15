	THUMB_FUNC_START sub_08127C5C
sub_08127C5C: @ 0x08127C5C
	push {r4-r7,lr}
	ldr r4, _08127C90  @ =gUnknown_03003D06
	mov r7, #0
	ldr r0, _08127C94  @ =0xFFFFE52A
	add r6, r4, r0
	add r5, r4, #0
	add r5, r5, #10
_08127C6A:
	ldrh r1, [r4]
	cmp r1, #98
	bhi _08127C9E
	add r0, r1, #0
	sub r0, r0, #59
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #20
	bls _08127C98
	add r0, r1, #0
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #20
	bls _08127CA2
	mov r1, #40
	strh r7, [r5]
	b _08127CA2
	.byte 0x00
	.byte 0x00
_08127C90:
	.4byte gUnknown_03003D06
_08127C94:
	.4byte 0xFFFFE52A
_08127C98:
	mov r1, #80
	strh r7, [r5]
	b _08127CA2
_08127C9E:
	mov r1, #0
	strh r1, [r5]
_08127CA2:
	strh r1, [r4]
	cmp r1, #18
	beq _08127CB0
	cmp r1, #58
	beq _08127CB0
	cmp r1, #98
	bne _08127CC2
_08127CB0:
	ldrh r1, [r5]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #5
	bls _08127CC2
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	b _08127C6A
_08127CC2:
	ldr r1, _08127CF0  @ =0x0000098E
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08127CFC
	ldr r1, _08127CF4  @ =0x00001AD2
	add r0, r6, r1
	ldrh r0, [r0]
	ldr r1, _08127CF8  @ =gTextPointer
	add r0, r0, r1
	ldrb r0, [r0]
	sub r0, r0, #102
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08127D14
	mov r1, #0
	b _08127D14
	.byte 0x00
	.byte 0x00
_08127CF0:
	.4byte 0x0000098E
_08127CF4:
	.4byte 0x00001AD2
_08127CF8:
	.4byte gTextPointer
_08127CFC:
	ldr r1, _08127D30  @ =0x00001AD2
	add r0, r6, r1
	ldrh r0, [r0]
	ldr r1, _08127D34  @ =gTextPointer
	add r0, r0, r1
	ldrb r1, [r0]
	cmp r1, #30
	bls _08127D0E
	mov r1, #255
_08127D0E:
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
_08127D14:
	add r0, r1, #0
	bl sub_08129A1C
	cmp r0, #0
	bne _08127C6A
	ldr r0, _08127D38  @ =gUnknown_02003080
	ldr r1, _08127D3C  @ =0x06007000
	mov r2, #252
	lsl r2, r2, #2
	bl CpuFastSet
	pop {r4-r7}
	pop {r0}
	bx r0
_08127D30:
	.4byte 0x00001AD2
_08127D34:
	.4byte gTextPointer
_08127D38:
	.4byte gUnknown_02003080
_08127D3C:
	.4byte 0x06007000
	THUMB_FUNC_END sub_08127C5C

