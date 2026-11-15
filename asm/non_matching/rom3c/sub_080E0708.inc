	THUMB_FUNC_START sub_080E0708
sub_080E0708: @ 0x080E0708
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r2, _080E0814  @ =gRam
	ldr r0, _080E0818  @ =0x00000DB4
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
	ldr r0, _080E081C  @ =0x00000ED2
	add r1, r2, r0
	add r1, r6, r1
	ldrb r0, [r1]
	sub r0, r0, #8
	strb r0, [r1]
	mov r0, #7
	add r5, r2, #0
	ldr r1, _080E0820  @ =0x00001052
	add r1, r1, r5
	mov r8, r1
_080E0732:
	lsl r0, r0, #24
	asr r4, r0, #24
	ldr r2, _080E0824  @ =0x00000FF2
	add r7, r5, r2
	add r2, r4, r7
	mov r1, #101
	strb r1, [r2]
	ldr r2, _080E0828  @ =0x00000FA2
	add r1, r5, r2
	add r1, r4, r1
	mov r2, #9
	strb r2, [r1]
	lsr r0, r0, #24
	bl sub_080CEB84
	ldr r0, _080E082C  @ =0x00000F02
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080E0830  @ =0x000016C5
	add r0, r5, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E0834  @ =0x00000EE2
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080E0838  @ =gUnknown_081767C0
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080E083C  @ =0x00000EF2
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _080E0840  @ =0x000016C1
	add r0, r5, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E081C  @ =0x00000ED2
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080E0844  @ =gUnknown_081767C8
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080E0848  @ =0x00000F62
	add r1, r5, r2
	add r1, r4, r1
	ldr r0, _080E084C  @ =gUnknown_081767D0
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E0850  @ =0x00000F92
	add r3, r5, r1
	add r3, r4, r3
	sub r0, r0, #1
	strb r0, [r3]
	sub r2, r2, #64
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _080E0854  @ =gUnknown_081767D8
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E0858  @ =0x00001132
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080E085C  @ =gUnknown_081767DA
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E0860  @ =0x00001122
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #13
	strb r1, [r0]
	ldr r2, _080E0864  @ =0x000010F2
	add r1, r5, r2
	add r1, r4, r1
	mov r2, #161
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r0, [r0]
	strb r0, [r1]
	bl GetRandomInt
	mov r2, r8
	add r1, r4, r2
	strb r0, [r1]
	sub r4, r4, #1
	lsl r4, r4, #24
	lsr r0, r4, #24
	cmp r4, #0
	bne _080E0732
	mov r0, #192
	lsl r0, r0, #1
	add r1, r7, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r7, #0
	add r0, r0, #16
	add r0, r6, r0
	ldr r1, _080E0868  @ =gArrowCount
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E0814:
	.4byte gRam
_080E0818:
	.4byte 0x00000DB4
_080E081C:
	.4byte 0x00000ED2
_080E0820:
	.4byte 0x00001052
_080E0824:
	.4byte 0x00000FF2
_080E0828:
	.4byte 0x00000FA2
_080E082C:
	.4byte 0x00000F02
_080E0830:
	.4byte 0x000016C5
_080E0834:
	.4byte 0x00000EE2
_080E0838:
	.4byte gUnknown_081767C0
_080E083C:
	.4byte 0x00000EF2
_080E0840:
	.4byte 0x000016C1
_080E0844:
	.4byte gUnknown_081767C8
_080E0848:
	.4byte 0x00000F62
_080E084C:
	.4byte gUnknown_081767D0
_080E0850:
	.4byte 0x00000F92
_080E0854:
	.4byte gUnknown_081767D8
_080E0858:
	.4byte 0x00001132
_080E085C:
	.4byte gUnknown_081767DA
_080E0860:
	.4byte 0x00001122
_080E0864:
	.4byte 0x000010F2
_080E0868:
	.4byte gArrowCount
	THUMB_FUNC_END sub_080E0708

