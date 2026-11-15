	THUMB_FUNC_START sub_08081928
sub_08081928: @ 0x08081928
	push {r4,r5,lr}
	add r3, r0, #0
	ldr r2, _080819DC  @ =gRam
	ldr r1, _080819E0  @ =0x0000178A
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	bne _08081940
	b _08081A48
_08081940:
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	ldrh r1, [r0]
	mov r0, #252
	lsl r0, r0, #1
	and r0, r0, r1
	ldr r4, _080819E4  @ =0x00000964
	add r1, r5, r4
	lsl r0, r0, #3
	ldrh r1, [r1]
	add r1, r0, r1
	ldr r0, _080819E8  @ =0x0000096C
	add r2, r5, r0
	strh r1, [r2]
	add r4, r4, #172
	add r0, r5, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _08081972
	mov r4, #128
	lsl r4, r4, #5
	add r0, r4, #0
	orr r1, r1, r0
	strh r1, [r2]
_08081972:
	mov r1, #0
	ldrsh r0, [r2, r1]
	ldr r2, _080819EC  @ =gUnknown_0200CBA0
	add r0, r0, r2
	ldrb r1, [r0]
	mov r0, #240
	and r0, r0, r1
	cmp r0, #112
	bne _08081A48
	mov r4, #15
	and r4, r4, r1
	lsl r2, r4, #1
	ldr r1, _080819F0  @ =0x0000195C
	add r0, r5, r1
	add r0, r2, r0
	ldrh r0, [r0]
	ldr r1, _080819F4  @ =0x0000F0F0
	and r1, r1, r0
	ldr r0, _080819F8  @ =0x00004040
	cmp r1, r0
	bne _08081A10
	ldr r2, _080819FC  @ =0x00000AD2
	add r0, r5, r2
	strh r4, [r0]
	add r0, r4, #0
	bl sub_08083AE4
	ldr r3, _08081A00  @ =0x000016C4
	add r0, r5, r3
	ldr r4, _08081A04  @ =0x00000952
	add r1, r5, r4
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r2, _08081A08  @ =0x00000504
	add r1, r5, r2
	strh r0, [r1]
	sub r3, r3, #4
	add r0, r5, r3
	add r4, r4, #6
	add r2, r5, r4
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _08081A0C  @ =0x00000506
	add r2, r5, r3
	strh r0, [r2]
	mov r0, #34
	bl sub_0812A324
	mov r0, #1
	b _08081B22
	.byte 0x00
	.byte 0x00
_080819DC:
	.4byte gRam
_080819E0:
	.4byte 0x0000178A
_080819E4:
	.4byte 0x00000964
_080819E8:
	.4byte 0x0000096C
_080819EC:
	.4byte gUnknown_0200CBA0
_080819F0:
	.4byte 0x0000195C
_080819F4:
	.4byte 0x0000F0F0
_080819F8:
	.4byte 0x00004040
_080819FC:
	.4byte 0x00000AD2
_08081A00:
	.4byte 0x000016C4
_08081A04:
	.4byte 0x00000952
_08081A08:
	.4byte 0x00000504
_08081A0C:
	.4byte 0x00000506
_08081A10:
	ldr r0, _08081A38  @ =0x00001010
	cmp r1, r0
	bne _08081A48
	ldr r1, _08081A3C  @ =0x00000AD2
	add r0, r5, r1
	strh r4, [r0]
	ldr r3, _08081A40  @ =0x0000199C
	add r0, r5, r3
	add r0, r2, r0
	ldrh r0, [r0]
	bl sub_080928F0
	add r0, r4, #0
	bl sub_08083AE4
	bl sub_08080FAC
	ldr r4, _08081A44  @ =0x00000DB8
	add r2, r5, r4
	b _08081ADE
_08081A38:
	.4byte 0x00001010
_08081A3C:
	.4byte 0x00000AD2
_08081A40:
	.4byte 0x0000199C
_08081A44:
	.4byte 0x00000DB8
_08081A48:
	ldr r1, _08081AF4  @ =0x0000180C
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08081A5A
	ldr r0, _08081AF8  @ =gSword
	ldrb r0, [r0]
	cmp r0, #4
	beq _08081A5E
_08081A5A:
	cmp r3, #0
	beq _08081B20
_08081A5E:
	add r1, r5, #0
	mov r2, #150
	lsl r2, r2, #4
	add r0, r1, r2
	ldrh r2, [r0]
	mov r0, #252
	lsl r0, r0, #1
	and r0, r0, r2
	ldr r3, _08081AFC  @ =0x00000964
	add r2, r1, r3
	lsl r0, r0, #3
	ldrh r2, [r2]
	add r2, r0, r2
	ldr r4, _08081B00  @ =0x0000096C
	add r3, r1, r4
	strh r2, [r3]
	mov r0, #161
	lsl r0, r0, #4
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08081A94
	mov r1, #128
	lsl r1, r1, #5
	add r0, r1, #0
	orr r2, r2, r0
	strh r2, [r3]
_08081A94:
	mov r2, #0
	ldrsh r0, [r3, r2]
	ldr r3, _08081B04  @ =gUnknown_0200CBA0
	add r0, r0, r3
	ldrb r1, [r0]
	mov r0, #240
	and r0, r0, r1
	cmp r0, #112
	bne _08081B20
	mov r4, #15
	and r4, r4, r1
	lsl r2, r4, #1
	ldr r1, _08081B08  @ =0x0000195C
	add r0, r5, r1
	add r0, r2, r0
	ldrh r1, [r0]
	ldr r0, _08081B0C  @ =0x0000F0F0
	and r0, r0, r1
	ldr r1, _08081B10  @ =0x00001010
	cmp r0, r1
	bne _08081B20
	ldr r3, _08081B14  @ =0x00000AD2
	add r0, r5, r3
	strh r4, [r0]
	ldr r1, _08081B18  @ =0x0000199C
	add r0, r5, r1
	add r0, r2, r0
	ldrh r0, [r0]
	bl sub_080928F0
	add r0, r4, #0
	bl sub_08083AE4
	bl sub_08080FAC
	ldr r3, _08081B1C  @ =0x00000DB8
	add r2, r5, r3
_08081ADE:
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #1
	bl Sprite_SpawnImmediatelySmashedTerrain
	bl sub_08116C98
	mov r0, #1
	b _08081B22
_08081AF4:
	.4byte 0x0000180C
_08081AF8:
	.4byte gSword
_08081AFC:
	.4byte 0x00000964
_08081B00:
	.4byte 0x0000096C
_08081B04:
	.4byte gUnknown_0200CBA0
_08081B08:
	.4byte 0x0000195C
_08081B0C:
	.4byte 0x0000F0F0
_08081B10:
	.4byte 0x00001010
_08081B14:
	.4byte 0x00000AD2
_08081B18:
	.4byte 0x0000199C
_08081B1C:
	.4byte 0x00000DB8
_08081B20:
	mov r0, #0
_08081B22:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08081928

