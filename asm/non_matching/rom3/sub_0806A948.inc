	THUMB_FUNC_START sub_0806A948
sub_0806A948: @ 0x0806A948
	push {r4,r5,lr}
	ldr r4, _0806A998  @ =gRam
	ldr r0, _0806A99C  @ =0x000009AC
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #9
	beq _0806A96C
	mov r1, #152
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #128
	strb r1, [r0]
	bl sub_080930E8
	ldrb r0, [r5]
	cmp r0, #9
	beq _0806A96C
	b _0806AAA0
_0806A96C:
	ldr r2, _0806A9A0  @ =0x00000B52
	add r1, r4, r2
	ldrh r0, [r1]
	cmp r0, #0
	beq _0806A978
	b _0806AA9C
_0806A978:
	ldr r3, _0806A9A4  @ =0x000009DA
	add r0, r4, r3
	ldrh r0, [r0]
	add r2, r4, #0
	cmp r0, #32
	beq _0806A9C2
	ldr r4, _0806A9A8  @ =0x000016D5
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806A9B0
	ldr r0, _0806A9AC  @ =0x000009AD
	add r1, r2, r0
	mov r0, #10
	b _0806A9B6
	.byte 0x00
	.byte 0x00
_0806A998:
	.4byte gRam
_0806A99C:
	.4byte 0x000009AC
_0806A9A0:
	.4byte 0x00000B52
_0806A9A4:
	.4byte 0x000009DA
_0806A9A8:
	.4byte 0x000016D5
_0806A9AC:
	.4byte 0x000009AD
_0806A9B0:
	ldr r3, _0806A9F8  @ =0x000009AD
	add r1, r2, r3
	mov r0, #11
_0806A9B6:
	strb r0, [r1]
	ldr r2, _0806A9FC  @ =gRam
	ldr r4, _0806AA00  @ =0x00000C0C
	add r1, r2, r4
	mov r0, #16
	strh r0, [r1]
_0806A9C2:
	add r4, r2, #0
	ldr r1, _0806AA04  @ =0x00000C08
	add r0, r4, r1
	ldr r3, _0806AA08  @ =0x00000C0A
	add r1, r4, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	beq _0806AAA0
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0806AAA0
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #0
	beq _0806AA10
	ldr r0, _0806AA0C  @ =0x00000C04
	add r1, r4, r0
	mov r0, #12
	strh r0, [r1]
	b _0806AA16
_0806A9F8:
	.4byte 0x000009AD
_0806A9FC:
	.4byte gRam
_0806AA00:
	.4byte 0x00000C0C
_0806AA04:
	.4byte 0x00000C08
_0806AA08:
	.4byte 0x00000C0A
_0806AA0C:
	.4byte 0x00000C04
_0806AA10:
	ldr r1, _0806AA6C  @ =0x00000C04
	add r0, r2, r1
	strh r3, [r0]
_0806AA16:
	ldr r3, _0806AA70  @ =gRam
	ldr r4, _0806AA74  @ =0x00000C0A
	add r2, r3, r4
	ldrh r1, [r2]
	ldr r0, _0806AA78  @ =0x00007FFF
	and r0, r0, r1
	mov r4, #0
	strh r0, [r2]
	ldr r1, _0806AA7C  @ =0x00000C02
	add r0, r3, r1
	strh r4, [r0]
	ldr r2, _0806AA80  @ =0x000009AD
	add r1, r3, r2
	mov r0, #9
	strb r0, [r1]
	ldr r1, _0806AA84  @ =0x000009E8
	add r0, r3, r1
	strh r4, [r0]
	ldr r2, _0806AA88  @ =0x000016C4
	add r0, r3, r2
	ldr r4, _0806AA8C  @ =0x00000952
	add r1, r3, r4
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r2, _0806AA90  @ =0x00000504
	add r1, r3, r2
	strh r0, [r1]
	mov r4, #182
	lsl r4, r4, #5
	add r0, r3, r4
	ldr r4, _0806AA94  @ =0x00000958
	add r2, r3, r4
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r2, _0806AA98  @ =0x00000506
	add r3, r3, r2
	strh r0, [r3]
	mov r0, #55
	bl sub_0812A324
	b _0806AAA0
_0806AA6C:
	.4byte 0x00000C04
_0806AA70:
	.4byte gRam
_0806AA74:
	.4byte 0x00000C0A
_0806AA78:
	.4byte 0x00007FFF
_0806AA7C:
	.4byte 0x00000C02
_0806AA80:
	.4byte 0x000009AD
_0806AA84:
	.4byte 0x000009E8
_0806AA88:
	.4byte 0x000016C4
_0806AA8C:
	.4byte 0x00000952
_0806AA90:
	.4byte 0x00000504
_0806AA94:
	.4byte 0x00000958
_0806AA98:
	.4byte 0x00000506
_0806AA9C:
	mov r0, #0
	strh r0, [r1]
_0806AAA0:
	ldr r0, _0806AAB0  @ =gRam
	ldr r3, _0806AAB4  @ =0x00001885
	add r0, r0, r3
	mov r1, #0
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_0806AAB0:
	.4byte gRam
_0806AAB4:
	.4byte 0x00001885
	THUMB_FUNC_END sub_0806A948

