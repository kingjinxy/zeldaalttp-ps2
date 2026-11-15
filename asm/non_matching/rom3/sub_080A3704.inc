	THUMB_FUNC_START sub_080A3704
sub_080A3704: @ 0x080A3704
	push {r4,lr}
	ldr r4, _080A3738  @ =gRam
	ldr r1, _080A373C  @ =0x00001710
	add r0, r4, r1
	ldrb r2, [r0]
	cmp r2, #0
	beq _080A3714
	b _080A380C
_080A3714:
	ldr r0, _080A3740  @ =0x0000176E
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _080A3748
	ldr r1, _080A3744  @ =0x00001727
	add r2, r4, r1
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	bl sub_080A38AC
	b _080A3898
	.byte 0x00
	.byte 0x00
_080A3738:
	.4byte gRam
_080A373C:
	.4byte 0x00001710
_080A3740:
	.4byte 0x0000176E
_080A3744:
	.4byte 0x00001727
_080A3748:
	strb r2, [r1]
	ldr r2, _080A3774  @ =0x0000172C
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3756
	b _080A3898
_080A3756:
	ldr r1, _080A3778  @ =0x000016E8
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A376E
	sub r2, r2, #52
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A377C
_080A376E:
	mov r0, #0
	b _080A3780
	.byte 0x00
	.byte 0x00
_080A3774:
	.4byte 0x0000172C
_080A3778:
	.4byte 0x000016E8
_080A377C:
	bl sub_080A1ADC
_080A3780:
	lsl r0, r0, #24
	cmp r0, #0
	bne _080A3788
	b _080A3898
_080A3788:
	ldr r3, _080A37AC  @ =gRam
	ldr r0, _080A37B0  @ =0x000016E8
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _080A37B4  @ =gMagicMeter
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A37B8
	mov r0, #64
	bl sub_0809E43C
	mov r0, #126
	bl sub_080AF4FC
	b _080A3898
_080A37AC:
	.4byte gRam
_080A37B0:
	.4byte 0x000016E8
_080A37B4:
	.4byte gMagicMeter
_080A37B8:
	ldr r2, _080A37F8  @ =0x00001789
	add r1, r3, r2
	mov r0, #0
	strb r0, [r1]
	ldr r0, _080A37FC  @ =0x00001710
	add r1, r3, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080A3800  @ =gUnknown_081690F2
	ldr r0, _080A3804  @ =gMagicUsage
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	sub r2, r2, #136
	add r0, r3, r2
	strb r1, [r0]
	ldr r0, _080A3808  @ =0x0000176E
	add r1, r3, r0
	mov r0, #20
	strb r0, [r1]
	mov r0, #4
	mov r1, #35
	bl sub_081167A0
	mov r0, #20
	bl sub_0809E43C
	mov r0, #18
	mov r1, #1
	bl sub_080BEA28
	b _080A3898
_080A37F8:
	.4byte 0x00001789
_080A37FC:
	.4byte 0x00001710
_080A3800:
	.4byte gUnknown_081690F2
_080A3804:
	.4byte gMagicUsage
_080A3808:
	.4byte 0x0000176E
_080A380C:
	ldr r2, _080A3858  @ =0x0000180D
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	bl sub_080A38AC
	ldr r0, _080A385C  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A3860  @ =0x00001701
	add r2, r4, r1
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _080A3870
	ldr r1, _080A3864  @ =gUnknown_081690F2
	ldr r0, _080A3868  @ =gMagicUsage
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _080A386C  @ =gMagicMeter
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bgt _080A3870
	strb r3, [r1]
	bl sub_0809E350
	b _080A3898
_080A3858:
	.4byte 0x0000180D
_080A385C:
	.4byte 0x00001727
_080A3860:
	.4byte 0x00001701
_080A3864:
	.4byte gUnknown_081690F2
_080A3868:
	.4byte gMagicUsage
_080A386C:
	.4byte gMagicMeter
_080A3870:
	ldr r2, _080A38A0  @ =gRam
	ldr r0, _080A38A4  @ =0x0000176E
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A3898
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080A38A8  @ =0x00000547
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080A3898
	bl sub_0809E350
_080A3898:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A38A0:
	.4byte gRam
_080A38A4:
	.4byte 0x0000176E
_080A38A8:
	.4byte 0x00000547
	THUMB_FUNC_END sub_080A3704

