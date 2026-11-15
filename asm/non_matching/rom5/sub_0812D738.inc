	THUMB_FUNC_START sub_0812D738
sub_0812D738: @ 0x0812D738
	push {r4,lr}
	bl sub_0812E0A0
	bl sub_08126D5C
	ldr r4, _0812D758  @ =gRam
	ldr r0, _0812D75C  @ =0x00000CF8
	add r1, r4, r0
	ldrh r0, [r1]
	add r2, r0, #0
	cmp r2, #0
	beq _0812D760
	sub r0, r0, #1
	strh r0, [r1]
	b _0812D878
	.byte 0x00
	.byte 0x00
_0812D758:
	.4byte gRam
_0812D75C:
	.4byte 0x00000CF8
_0812D760:
	ldr r1, _0812D794  @ =0x000009E8
	add r3, r4, r1
	ldrh r1, [r3]
	ldr r0, _0812D798  @ =0x000001DB
	cmp r1, r0
	bhi _0812D7FC
	ldr r1, _0812D79C  @ =0x00000534
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #13
	and r0, r0, r1
	cmp r0, #0
	beq _0812D7FC
	ldr r1, _0812D7A0  @ =0x0000099D
	add r0, r4, r1
	strb r2, [r0]
	strh r2, [r3]
	ldr r0, _0812D7A4  @ =gUnknown_020023F3
	ldrb r0, [r0]
	cmp r0, #0
	bne _0812D7AC
	ldr r2, _0812D7A8  @ =0x000009AD
	add r1, r4, r2
	mov r0, #12
	strb r0, [r1]
	b _0812D878
_0812D794:
	.4byte 0x000009E8
_0812D798:
	.4byte 0x000001DB
_0812D79C:
	.4byte 0x00000534
_0812D7A0:
	.4byte 0x0000099D
_0812D7A4:
	.4byte gUnknown_020023F3
_0812D7A8:
	.4byte 0x000009AD
_0812D7AC:
	ldr r3, _0812D7E4  @ =0x000009AD
	add r1, r4, r3
	mov r0, #0
	strb r0, [r1]
	ldr r0, _0812D7E8  @ =0x0000050C
	add r2, r4, r0
	ldrh r0, [r2]
	mov r3, #128
	lsl r3, r3, #1
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _0812D7EC  @ =0x0000051E
	add r1, r4, r0
	mov r0, #214
	strh r0, [r1]
	ldr r2, _0812D7F0  @ =0x0000099A
	add r1, r4, r2
	mov r0, #6
	strb r0, [r1]
	ldr r0, _0812D7F4  @ =0x00000191
	bl sub_080AF4FC
	ldr r3, _0812D7F8  @ =0x000009AC
	add r1, r4, r3
	mov r0, #29
	strb r0, [r1]
	b _0812D878
_0812D7E4:
	.4byte 0x000009AD
_0812D7E8:
	.4byte 0x0000050C
_0812D7EC:
	.4byte 0x0000051E
_0812D7F0:
	.4byte 0x0000099A
_0812D7F4:
	.4byte 0x00000191
_0812D7F8:
	.4byte 0x000009AC
_0812D7FC:
	ldr r4, _0812D830  @ =gRam
	ldr r1, _0812D834  @ =0x00000534
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #0
	beq _0812D844
	mov r0, #73
	mov r1, #0
	bl sub_0812A324
	ldr r2, _0812D838  @ =0x000009EC
	add r0, r4, r2
	mov r1, #0
	strb r1, [r0]
	ldr r3, _0812D83C  @ =0x0000099D
	add r0, r4, r3
	strb r1, [r0]
	ldr r0, _0812D840  @ =0x000009AD
	add r1, r4, r0
	mov r0, #13
	strb r0, [r1]
	b _0812D878
_0812D830:
	.4byte gRam
_0812D834:
	.4byte 0x00000534
_0812D838:
	.4byte 0x000009EC
_0812D83C:
	.4byte 0x0000099D
_0812D840:
	.4byte 0x000009AD
_0812D844:
	ldr r1, _0812D880  @ =0x000009E8
	add r2, r4, r1
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
	lsl r0, r0, #16
	mov r1, #242
	lsl r1, r1, #17
	cmp r0, r1
	bne _0812D85E
	ldr r1, _0812D884  @ =0x000009F6
	add r0, r4, r1
	strh r3, [r0]
_0812D85E:
	ldrh r1, [r2]
	cmp r1, #0
	bne _0812D878
	ldr r3, _0812D884  @ =0x000009F6
	add r0, r4, r3
	strh r1, [r0]
	ldr r0, _0812D888  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #32
	strh r0, [r2]
_0812D878:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812D880:
	.4byte 0x000009E8
_0812D884:
	.4byte 0x000009F6
_0812D888:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0812D738

