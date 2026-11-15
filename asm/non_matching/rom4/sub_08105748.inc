	THUMB_FUNC_START sub_08105748
sub_08105748: @ 0x08105748
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_08105F3C
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _08105768
	b _08105916
_08105768:
	add r0, r5, #0
	bl sub_080C5044
	add r0, r5, #0
	bl sub_08105DF0
	ldr r2, _081057F0  @ =gRam
	ldr r1, _081057F4  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0810584C
	ldr r3, _081057F8  @ =0x00000F22
	add r0, r2, r3
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r4, _081057FC  @ =0x00000961
	add r3, r2, r4
	strb r1, [r3]
	ldr r6, _08105800  @ =0x00000F12
	add r0, r2, r6
	add r0, r5, r0
	ldrb r0, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r2, r2, r7
	strb r0, [r2]
	orr r0, r0, r1
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810584C
	mov r9, r3
	mov r8, r2
	mov r6, #1
	mov r1, #1
	mov r0, #0
	ldrsb r0, [r3, r0]
	mov r2, #1
	cmp r0, #0
	bgt _081057C8
	mov r2, #0
	cmp r0, #0
	bge _081057C8
	sub r2, r2, #1
_081057C8:
	mov r3, r9
	mov r0, #0
	ldrsb r0, [r3, r0]
	add r4, r0, #0
	mul r4, r2, r4
	mov r3, #1
	mov r7, r8
	mov r2, #0
	ldrsb r2, [r7, r2]
	cmp r2, #0
	bgt _081057E6
	mov r3, #0
	cmp r2, #0
	bge _081057E6
	sub r3, r3, #1
_081057E6:
	mul r2, r3, r2
	cmp r4, #63
	ble _08105804
	mov r6, #4
	b _0810580A
_081057F0:
	.4byte gRam
_081057F4:
	.4byte 0x00000996
_081057F8:
	.4byte 0x00000F22
_081057FC:
	.4byte 0x00000961
_08105800:
	.4byte 0x00000F12
_08105804:
	cmp r4, #31
	ble _0810580A
	mov r6, #2
_0810580A:
	cmp r2, #63
	ble _08105812
	mov r1, #4
	b _08105818
_08105812:
	cmp r2, #31
	ble _08105818
	mov r1, #2
_08105818:
	add r4, r6, #0
	cmp r4, r1
	bge _08105820
	add r4, r1, #0
_08105820:
	add r1, r4, #0
	bl __divsi3
	mov r1, r9
	strb r0, [r1]
	mov r2, r8
	mov r0, #0
	ldrsb r0, [r2, r0]
	add r1, r4, #0
	bl __divsi3
	mov r3, r8
	strb r0, [r3]
	bl sub_080CA32C
	ldr r2, _08105924  @ =gRam
	ldr r4, _08105928  @ =0x00000FB2
	add r2, r2, r4
	add r2, r5, r2
	mov r1, #15
	and r1, r1, r0
	strb r1, [r2]
_0810584C:
	add r0, r5, #0
	bl sub_080C99DC
	ldr r4, _08105924  @ =gRam
	ldr r6, _0810592C  @ =0x00001152
	add r0, r4, r6
	add r2, r5, r0
	ldrb r0, [r2]
	sub r0, r0, #2
	mov r6, #0
	strb r0, [r2]
	ldr r7, _08105930  @ =0x00001142
	add r0, r4, r7
	add r3, r5, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08105876
	strb r6, [r3]
	strb r6, [r2]
_08105876:
	add r0, r5, #0
	bl sub_080C1F70
	ldr r1, _08105934  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	strb r0, [r2]
	ldr r7, _08105938  @ =0x00000F72
	add r0, r4, r7
	add r0, r5, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	add r7, r7, #16
	add r0, r4, r7
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r1, _0810593C  @ =0x00000964
	add r7, r4, r1
	strb r0, [r7]
	ldr r3, _08105940  @ =0x000010A2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r3, _08105944  @ =0x00000965
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _08105948  @ =0x00001092
	add r0, r4, r1
	add r3, r5, r0
	strb r6, [r3]
	ldr r6, _0810594C  @ =0x00001622
	add r0, r4, r6
	ldrb r1, [r0]
	add r6, r6, #1
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r1, r1, r0
	add r1, r1, #48
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #95
	bhi _081058FE
	ldr r1, _08105950  @ =0x00001624
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _08105954  @ =0x00001625
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r7]
	sub r1, r1, r0
	add r1, r1, #48
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #95
	bhi _081058FE
	mov r0, #1
	strb r0, [r3]
_081058FE:
	ldr r1, _08105958  @ =gUnknown_0817BE98
	ldr r0, _08105924  @ =gRam
	ldr r3, _0810595C  @ =0x00000F52
	add r0, r0, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_08105916:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08105924:
	.4byte gRam
_08105928:
	.4byte 0x00000FB2
_0810592C:
	.4byte 0x00001152
_08105930:
	.4byte 0x00001142
_08105934:
	.4byte 0x00000F62
_08105938:
	.4byte 0x00000F72
_0810593C:
	.4byte 0x00000964
_08105940:
	.4byte 0x000010A2
_08105944:
	.4byte 0x00000965
_08105948:
	.4byte 0x00001092
_0810594C:
	.4byte 0x00001622
_08105950:
	.4byte 0x00001624
_08105954:
	.4byte 0x00001625
_08105958:
	.4byte gUnknown_0817BE98
_0810595C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08105748

