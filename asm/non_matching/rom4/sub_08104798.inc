	THUMB_FUNC_START sub_08104798
sub_08104798: @ 0x08104798
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _08104848  @ =gRam
	ldr r1, _0810484C  @ =0x00001642
	add r0, r3, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08104850  @ =0x00001072
	add r0, r3, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _08104854  @ =0x00001032
	add r0, r3, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #64
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _08104858  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0810482C
	ldr r0, _0810485C  @ =0x00000F62
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810482C
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _08104860  @ =0x000010E2
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r2, _08104864  @ =0x00000F52
	add r0, r3, r2
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r2, r2, #112
	add r0, r3, r2
	add r5, r4, r0
	mov r0, #128
	strb r0, [r5]
	add r2, r2, #224
	add r0, r3, r2
	add r0, r4, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _0810482C
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #64
	strb r0, [r5]
	ldr r1, _08104868  @ =0x00001172
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	mov r0, #45
	mov r1, #0
	bl sub_0812A324
_0810482C:
	ldr r2, _08104848  @ =gRam
	ldr r1, _08104858  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #48
	and r0, r0, r1
	cmp r0, #0
	beq _08104870
	ldr r1, _0810486C  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #4
	b _08104878
	.byte 0x00
	.byte 0x00
_08104848:
	.4byte gRam
_0810484C:
	.4byte 0x00001642
_08104850:
	.4byte 0x00001072
_08104854:
	.4byte 0x00001032
_08104858:
	.4byte 0x00000996
_0810485C:
	.4byte 0x00000F62
_08104860:
	.4byte 0x000010E2
_08104864:
	.4byte 0x00000F52
_08104868:
	.4byte 0x00001172
_0810486C:
	.4byte 0x00000F92
_08104870:
	ldr r1, _08104880  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #5
_08104878:
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_08104880:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_08104798

